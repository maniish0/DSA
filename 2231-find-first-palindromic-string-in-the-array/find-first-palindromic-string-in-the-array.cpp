class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const string& w : words){
            string rev = w;
            reverse(rev.begin(), rev.end());
            if(rev == w) return w;
        }
        return "";
    }
};