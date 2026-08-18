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
    int getLength(ListNode* node) {
        int length = 0;

        while (node != NULL) {
            length++;
            node = node->next;
        }

        return length;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int len1 = getLength(headA);
        int len2 = getLength(headB);

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        // Move the longer list ahead
        if (len1 > len2) {
            for (int i = 0; i < len1 - len2; i++) {
                t1 = t1->next;
            }
        }
        else {
            for (int i = 0; i < len2 - len1; i++) {
                t2 = t2->next;
            }
        }

        // Move both pointers together
        while (t1 != NULL && t2 != NULL) {
            if (t1 == t2) {
                return t1;
            }

            t1 = t1->next;
            t2 = t2->next;
        }

        return NULL;
    }
};