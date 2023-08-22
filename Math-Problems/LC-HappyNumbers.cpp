class Solution {
public:
    bool isHappy(int n) {
        if (n >= 1 && n <= 9) {
            return n == 1 || n == 7;
        }
        
        int digit; 
        int squaredDigit = 0;
        
        while (n > 0) {
            digit = n % 10;
            squaredDigit += digit * digit;
            n /= 10;
        }
        
        return isHappy(squaredDigit);
    }
};
