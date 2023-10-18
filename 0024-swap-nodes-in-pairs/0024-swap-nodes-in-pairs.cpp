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
    ListNode* swapPairs(ListNode* head) {
        //swap nodes
        //we need extra variable to store the swapped node
        ListNode* dummyNode = new ListNode();
        ListNode* prevNode = dummyNode;
        ListNode* currentNode = head;
        if(!head or !head->next) return head;
        while(currentNode and currentNode->next){
            prevNode->next = currentNode->next;
            currentNode->next = prevNode->next->next;
            prevNode->next->next = currentNode;
            
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        return dummyNode->next;
    }
};





