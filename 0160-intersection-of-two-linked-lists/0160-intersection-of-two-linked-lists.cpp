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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*>visit;

        ListNode* temp = headA;
        while(temp != NULL){
            visit.insert(temp);
            temp = temp->next;
        }

        temp = headB;
        while(temp != NULL){
            if(visit.find(temp) != visit.end()){
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};