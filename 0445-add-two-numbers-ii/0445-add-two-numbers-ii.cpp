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
      ListNode* rev(ListNode* node)
    {
        ListNode* prev=nullptr,*cur=node;
        while(cur!=nullptr)
        {
            ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;

        ListNode* h1=rev(l1);
        ListNode* h2=rev(l2);

        ListNode* ans = new ListNode();


        int carry=0;
        while(h1!=nullptr || h2!=nullptr)
        {
            int fno=carry;
            
            if(h1 && h2)
            { 
                fno=(fno+h1->val+h2->val)%10;
                carry=(carry+h1->val+h2->val)/10;
                h1=h1->next;
                h2=h2->next;
            }
            else if(h1)
            {
                fno=(fno+h1->val)%10;
                carry=(carry+h1->val)/10;
                h1=h1->next;
            }else{
                fno=(fno+h2->val)%10;
                carry=(carry+h2->val)/10;
                h2=h2->next;
            }
            ans->val=fno;
            ListNode * temp=new ListNode(carry);
            temp->next=ans;
            ans=temp;
        }
        return carry==0?ans->next:ans;

    }
};