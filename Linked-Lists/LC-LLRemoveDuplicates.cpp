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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode *t1 = head;
        ListNode *t2 = t1->next; // Start t2 from the second node.
        ListNode *temp;

        while (t2) {
            if (t2->val == t1->val) {
                temp = t2;
                t2 = t2->next;
                t1->next = t2;
                delete temp;
            } else {
                t1 = t1->next;
                t2 = t2->next;
            }
        }

        return head;
    }
};
