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
    ListNode* sortList(ListNode* head) {
        vector<int> dummy;

        ListNode* temp = head;

        // Store all values
        while (temp != NULL) {
            dummy.push_back(temp->val);
            temp = temp->next;
        }

        // Sort values
        sort(dummy.begin(), dummy.end());

        // Put sorted values back
        temp = head;
        int n = dummy.size();

        for (int i = 0; i < n; i++) {
            temp->val = dummy[i];
            temp = temp->next;
        }

        return head;
    }
};