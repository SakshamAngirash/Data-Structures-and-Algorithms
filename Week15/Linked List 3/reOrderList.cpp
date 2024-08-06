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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL  ; 
        ListNode* current = head ; 
        ListNode* next = NULL; 
        while(current)
        {
            next=current->next; 
            current ->next = prev; 
            prev=current ;
            current=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head; 
        ListNode* fast = head; 
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next; 
            fast=fast->next->next; 
        }
        ListNode*b = reverseList(slow->next);
        ListNode* a=head; 
        slow->next=NULL; 
        //for breaking the list 

        ListNode* c = new ListNode(100); 
        ListNode* tempc=c; 
        ListNode* tempa=a; 
        ListNode* tempb=b;

        while(tempa && tempb)
        {
            tempc->next = tempa; 
            tempa=tempa->next;
            tempc=tempc->next;

            tempc->next=tempb; 
            tempb=tempb->next; 
            tempc=tempc->next;
        }
        tempc->next=tempa; 
        head =  c->next;
        
        
        
    }
};