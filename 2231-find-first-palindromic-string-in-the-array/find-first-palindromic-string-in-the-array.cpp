class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& w : words) {
            int l = 0, r = w.length() - 1;
            while (l < r) {          // ← guard condition first
                if (w[l] != w[r])    // ← mismatch: break early
                    break;
                l++;
                r--;
            }
            if (l >= r) return w;    // ← palindrome confirmed OUTSIDE loop
        }
        return "";
    }
};