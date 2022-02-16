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
// Convert binary number in a linked list
// Binary number representation to an integer


class Solution {
public:
    int getDecimalValue(ListNode* head) {
     vector<int> ans;
        int cnt=0;
        while(head!=NULL)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        reverse(begin(ans),end(ans));
        for(int i=0;i<ans.size();i++)
        {
            cnt+=ans[i]*(1<<i);
        }
        return cnt;
    }
};