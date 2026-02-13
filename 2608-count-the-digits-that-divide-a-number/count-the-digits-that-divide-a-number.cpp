class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int x = num;

        while (x != 0) {
            int rem = x % 10;
            if (rem != 0 && num % rem == 0) { // avoid divide by zero
                cnt++;
            }
            x = x / 10;
        }
        return cnt;
    }
};