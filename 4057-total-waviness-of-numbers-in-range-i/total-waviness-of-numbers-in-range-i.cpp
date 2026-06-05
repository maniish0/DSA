class Solution {
public:
    int waviness(int num) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());

        int n = digits.size();
        if (n < 3) return 0;  // less than 3 digits then waviness is 0

        int count = 0;
        for (int i = 1; i < n - 1; i++) {  // only middle digits
            if (digits[i] > digits[i-1] && digits[i] > digits[i+1])
                count++;  // peak
            else if (digits[i] < digits[i-1] && digits[i] < digits[i+1])
                count++;  // valley
        }
        return count;
    }

    int totalWaviness(int num1, int num2) {
        int total = 0;
        for (int i = num1; i <= num2; i++) {
            total += waviness(i);
        }
        return total;
    }
};