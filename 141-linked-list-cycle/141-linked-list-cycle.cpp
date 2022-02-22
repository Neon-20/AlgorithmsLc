/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Check whether a linked list has cycle or not
        // using floyd cycle detection algorithm
        //     So now::
        if(!head) return false;
            ListNode *slow=head;
            ListNode *fast=head;
     while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};