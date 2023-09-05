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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode *t1=list1, *t2=list2, *t=list1;
//         while(t1->next!=NULL){
//             t1=t1->next;
//         }
//         t1->next=t2;
//         ListNode *i=list1;
//         ListNode *j;
//         while(i->next!=NULL){
//             j=i->next;
//             while(j!=NULL){
//                 if(j->val < i->val){
//                     i->val==j->val;
//                 }
//                 j=j->next;
//             }
//             i=i->next;
//         }
//         return t;
//     }
// };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode *t1 = list1, *t2 = list2, *t = list1;
        while (t1->next != NULL) {
            t1 = t1->next;
        }
        t1->next = t2;
        ListNode *i = list1;
        ListNode *j;
        while (i != NULL) {
            j = i->next;
            while (j != NULL) {
                if (j->val < i->val) {
                    swap(i->val,j->val);
                }
                j = j->next;
            }
            i = i->next;
        }
        return t;
    }
};
