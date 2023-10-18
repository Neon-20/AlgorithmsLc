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
    ListNode* swapNodes(ListNode* head, int k) {
    //we have to swap the values unfortunately here
        ListNode* left = head;
        ListNode* right = head;
        ListNode* current = head;
        int cnt = 1;
        while(current!=nullptr){
            if(cnt<k){
                left = left->next;
            }
            else if(cnt>k){
                right=right->next;
            }
            current = current->next;
            cnt++;
        }
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        return head;
    }
};












