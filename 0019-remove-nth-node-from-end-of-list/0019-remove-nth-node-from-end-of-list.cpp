class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If nth node from end is the head
        if(fast == nullptr) {
            return head->next;
        }

        while(fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;

        return head;
    }
};