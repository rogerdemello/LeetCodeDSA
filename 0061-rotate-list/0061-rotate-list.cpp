class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        tail->next = head;

        int stepsToNewTail = length - (k % length);
        for (int i = 0; i < stepsToNewTail; ++i) {
            tail = tail->next;
        }

        ListNode* newHead = tail->next;
        tail->next = nullptr;

        return newHead;
    }
};
