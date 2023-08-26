// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n==1){
//             return true;
//         }
//         double base=2.0;
//         double number=n;

//         double result = log(number)/log(base);

//         double epsilon=1e-9;

//         if(abs(result - round(result)) < epsilon){
//             return true;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        
        return (n & (n - 1)) == 0;
    }
};
