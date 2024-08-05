class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* current = head;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(100);
        // Deep copy of head
        ListNode* temp = head;
        ListNode* tempc = c;
        while (temp) {
            ListNode* node = new ListNode(temp->val);
            tempc->next = node;
            temp = temp->next;
            tempc = tempc->next;
        }
        c = c->next; // Ignoring the extra node
        c = reverseList(c);
        ListNode* a = head;
        ListNode* b = c;
        while (a) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};


//Better Method without extra space