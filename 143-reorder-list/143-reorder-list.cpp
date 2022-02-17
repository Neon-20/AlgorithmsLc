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
class Solution {
public:
    void reorderList(ListNode* head) {
        // cant rotate 
        // Lo,LN,L1,LN-1.....
        ListNode* slow=head;
        ListNode* fast=head;
        vector<int> v;
        while(fast!=nullptr)
        {
         v.push_back(fast->val);
            fast=fast->next;
        }
        
        int first=0;
        int second=v.size()-1;
        while((second-first)>=1)
        {
            slow->val=v[first++];
            slow=slow->next;
            slow->val=v[second--];
            slow=slow->next;
        }
        if(first == second)
            slow->val=v[first];
        
        
    }
};