class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntL = 0; 
        int cntR = 0;
        int cntB = 0;
        
        for(char c : moves){
            if(c == 'L') cntL++;
            else if(c == 'R') cntR++;
            else cntB++;


        }
        return abs(cntL - cntR) + cntB;
        
    }
};