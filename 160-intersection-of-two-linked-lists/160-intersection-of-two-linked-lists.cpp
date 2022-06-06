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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //intersection of 2 linked lists
       stack<ListNode*> a,b;
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        ListNode* lastread=nullptr;
        while(ptr1){
            a.push(ptr1);
            ptr1=ptr1->next;
        }
         while(ptr2){
            b.push(ptr2);
            ptr2=ptr2->next;
        }
        while(!a.empty() and !b.empty() and (a.top() == b.top())){
            lastread=a.top();
            a.pop();
            b.pop();
        }
        return lastread;
    }
};