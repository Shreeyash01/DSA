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
    int getDecimalValue(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        int cnt = 0;
        while (t1 != nullptr) {
            cnt++;
            t1 = t1->next;
        }
        int p = cnt - 1;
        int decimal = 0;
        while (t2 != nullptr) {
            decimal += (t2->val) * pow(2, p);
            p--;
            t2 = t2->next;
        }
        return decimal;
    }
};
