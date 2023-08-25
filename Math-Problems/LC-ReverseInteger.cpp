// class Solution {
// public:
//     int reverse(int x) {
//         string s;
//         if(x<0){
//             s=to_string(x);
//             std::reverse(s.begin()+1,s.end());
//         }else{
//             s=to_string(x);
//             std::reverse(s.begin(),s.end());
//         }

//         int num=stoi(s);
//         if(sizeof(num)>4){
//             return 0;
//         }
//         return num;
//     }
// };

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        
        while (x != 0) {
            // Check for overflow before updating reversed
            if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
                return 0;
            }
            
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        return reversed;
    }
};
