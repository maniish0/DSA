class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;

        int rev = 0;
        int original = x;

        while (x > 0) {
            int digit = x % 10;

            if (rev > (INT_MAX - digit) / 10) return false;

            rev = rev * 10 + digit;
            x = x / 10;
        }

        return rev == original;
    }
};
