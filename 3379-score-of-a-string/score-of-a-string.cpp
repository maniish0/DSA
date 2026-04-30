class Solution {
public:
    int scoreOfString(string s) {
       int res = 0;

    // i have to traverse the string from 0 to n-2
    //calculate the diff between i and i+1 for each i.
     for(int i = 0; i < s.length()-1; i++){
        res += abs(s[i] - s[i+1]);
     }
     return res; 
    }
};