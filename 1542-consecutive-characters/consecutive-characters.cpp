class Solution {
public:
    int maxPower(string s) {
        int maxlen = 1;
        int currlen = 1;
        
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i-1]){
                currlen++;
                maxlen = max(maxlen, currlen);
            }else{
                currlen = 1;
            }
        }
        return maxlen;

       
    }
};