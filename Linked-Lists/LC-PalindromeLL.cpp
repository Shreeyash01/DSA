// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         string str;

//         ListNode *t=head;
//         while(t!=NULL){
//             str=str+to_string(t->val);
//             t=t->next;
//         }

//         int left = 0;
//         int right = str.length() - 1;

//         while (left < right) {
//             if (str[left] != str[right])
//                 return false;
//             left++;
//             right--;
//         }

//         return true;
//     }
// };

class Solution{
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
    
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalfReversed = reverseList(slow->next);
        ListNode* firstHalf = head;
        ListNode* secondHalf = secondHalfReversed;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val)
                return false;
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return true;
    }
};
