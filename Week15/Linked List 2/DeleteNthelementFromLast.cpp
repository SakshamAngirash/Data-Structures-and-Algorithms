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
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int length=0; 
//         ListNode* temp =head; 
//         while(temp!=NULL)
//         {
//             length++; 
//             temp=temp->next;
//         }
//         if(n==length) {
//             head=head->next; 
//             return head;
//         }
//         //n th from end = len-n+1 th from start
//         int m = length - n + 1;
//         int idx = m-1 ; //index of node to be deleted
//         temp=head;
//         for(int i = 1 ;i<=idx-1 ; i++)
//         {
//             temp=temp->next; 
//         }
//         temp->next=temp->next->next;
//         return head; 

        
//     }
// };

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=1 ; i<=n+1 ; i++)
        {
            if(fast==NULL)return head->next;
            fast=fast->next; 
            
        }
        
        while(fast!=NULL)
        {
            
            fast=fast->next; 
            slow=slow->next; 
        }
        slow->next=slow->next->next; 
        return head;
    }
};