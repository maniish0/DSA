class Solution {
public:
    int numberOfSpecialChars(string word) {
        int x = 0; set<char> a, b;
        for(char c: word) islower(c) ? a.insert(c) : b.insert(c+32);
        for(char c : a)  x+= b.count(c);
         return x;
    }
};