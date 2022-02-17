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
    void deleteNode(ListNode* node) {
        // Delete a node in the linked list
       ListNode* temp=node->next;
        node->val=node->next->val;
        node->next=temp->next;
        delete temp;
            
    }
};