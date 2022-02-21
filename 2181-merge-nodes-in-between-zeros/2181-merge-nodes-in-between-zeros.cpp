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
    ListNode* mergeNodes(ListNode* head) {
       //  We create a dummy linked list
        ListNode dummy;
        ListNode* tail=&dummy;
        while(head!=NULL)
        {
            
            if(head->val == 0) head=head->next;
            if(!head) break;
            int sum=0;
            while(head->val!=0)
            {
                sum+=head->val;// 3
                head=head->next;
            }
            // sum = 4
            tail->next=new ListNode(sum);
            tail=tail->next;
        }
         return dummy.next;
    }
};






