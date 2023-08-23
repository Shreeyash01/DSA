// class Solution {
// public:
//     bool isPalindrome(int x) { 
//         string a = to_string(x);
//         string b = a;
//         reverse(a.begin(),a.end());
//         if(a!=b){
//             return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) { 
        string s = to_string(x);
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};
