class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& w : words) {
            int l = 0, r = w.length() - 1;
            while (w[l] == w[r]) {
                if (l >= r) return w;
                l++;
                r--;
            }
        }
        return "";
    }
};