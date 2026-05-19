class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const string& w : words){
            int l = 0, r = w.size()- 1;
            while( l < r){
                if( w[l] != w[r]) break;
                l++;
                r--;

            }
            if(l >= r) return w;
        }
        return "";
    }
};