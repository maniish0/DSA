class Solution {
public:
    int balancedStringSplit(string s) {


        //greedy works!!!
        int x =0;
        int n = s.size();
        int count = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'L') x++;
            if(s[i] == 'R') x--;
            if(x == 0) count++;
        }
        return count;
    }
};