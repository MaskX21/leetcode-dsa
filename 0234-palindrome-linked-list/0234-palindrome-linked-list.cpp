class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return true;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* secondHalf = reverse(slow->next);

        // Compare both halves
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;

        while (temp != NULL) {
            if (firstHalf->val != temp->val) {
                return false;
            }

            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        return true;
    }
};