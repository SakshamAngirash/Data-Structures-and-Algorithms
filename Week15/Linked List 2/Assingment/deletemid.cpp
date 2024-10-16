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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head; 
        ListNode* fast=head; 
        ListNode* prev=head;
        if(head->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev = slow;
            slow=slow->next; 
            fast=fast->next->next;
        }
        return prev;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev = middleNode(head);
        if (prev == NULL)return head->next;
        prev->next = prev->next->next; 
        return head;
        
    }
};