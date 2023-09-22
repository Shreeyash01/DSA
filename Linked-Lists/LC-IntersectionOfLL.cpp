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
    int getLength(ListNode *head) {
        int length = 0;
        ListNode *current = head;
        while (current) {
            length++;
            current = current->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = getLength(headA);
        int lengthB = getLength(headB);
        ListNode *a = headA;
        ListNode *b = headB;
        while (lengthA > lengthB) {
            a = a->next;
            lengthA--;
        }

        while (lengthB > lengthA) {
            b = b->next;
            lengthB--;
        }
        while (a && b) {
            if (a == b)
                return a;
            a = a->next;
            b = b->next;
        }
        return nullptr;
    }
};
