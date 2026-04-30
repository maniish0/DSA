class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            if(j < t.length() && s[i] == t[j]){
                j++;
            }
        }
        return t.length() -j;
        
    }
};