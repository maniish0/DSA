class Solution {
public:
    int reverse(int x) {
        long newX = 0, remDigits = 0;
        while(x != 0){
            remDigits = x % 10;

          // Check for overflow/underflow before updating ans
            if ((newX > INT_MAX / 10) || (newX < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            newX = newX * 10 + remDigits;
            x /= 10;
        }

        return newX;
        
    }
};