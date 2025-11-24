/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<stack>
 #include<cmath>
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        stack<int> arr;
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            ++count;
            arr.push(temp->val);
            temp=temp->next;
        }

        int num=0;
        int i=0;
        for(;i<count&&(!arr.empty());++i)
        {
            if(arr.top()==1)
            {
                num+=(pow(2,i));
            }
            arr.pop();
           
        }
        return num;
        
    }
};