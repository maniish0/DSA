class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int> freq;

       for(char c : s)
        freq[c]++;

        int length = 0; 
        bool hasOdd = false;

         for (auto& [ch, count] : freq) {
        length += (count / 2) * 2;  // take the largest even part
        if (count % 2 == 1)
            hasOdd = true;          // found an odd frequency char
    }

    if (hasOdd) length++;  // place one odd char in the middle, 
    //the acctual meaning of the line is "IF hasOdd IS TRUE THEN INC THE LENGTH BY 1"

    return length;
    }    

        

    
};