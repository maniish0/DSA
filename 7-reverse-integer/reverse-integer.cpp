class Solution {
public:
    int reverse(int x) {
        int rev = 0;  // rev ko 0 se shuru karo 

        while (x) {
            // Check karo ki rev 32-bit int range ke bahar na chala jaye
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            int digit = x % 10;       // Last digit nikal lo (get the last digit)
            rev = rev * 10 + digit;    // rev me digit jod do 
            x = x / 10;       // Last digit hata do
        }

        return rev;  // Final reversed number return karo
    }
};