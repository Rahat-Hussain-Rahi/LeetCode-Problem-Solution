#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;
int BtoN(string str)
{
    int num{};
    // reverse(str.begin(), str.end());
    for (int i{}; str[i] != '\0'; ++i)
    {
        if (str[i] == '1')
        {
            num += pow(2, i);
        }
    }
    return num;
}
vector<bool> prefixesDivBy5(vector<int> &nums)
{
    int size = nums.size();
    vector<bool> vec(size, false);
    string str{};
    for (int i{}; i < size; ++i)
    {
        
        int num =0;
        if(nums[i]==1)
        {
            num+=pow(2,i);
        }
        if (num % 5 == 0)
        {
            vec[i] = true;
        }
    }
    return vec;
}
int main()
{
   
    int size{};
    cout<<"ENter the size of test case :"<<endl;
    cin>>size;
     vector<int> vec(size,0);
    for(int i{};i<size;++i)
    {
        cin>>vec[i];
    }

    vector<bool> arr=prefixesDivBy5(vec);
    cout<<endl;
    for(bool val:arr)
    {
        cout<<val;
    }
    return 0;
}