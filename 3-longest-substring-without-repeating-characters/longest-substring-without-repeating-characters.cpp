class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256, -1); // stores last index of each character
        int maxLen = 0, start = -1;

        for (int i = 0; i < s.size(); i++) {
            if (index[s[i]] > start)
                start = index[s[i]]; // move start right after the last duplicate
            index[s[i]] = i;         // update last seen index
            maxLen = max(maxLen, i - start);
        }

        return maxLen;
    }
};
