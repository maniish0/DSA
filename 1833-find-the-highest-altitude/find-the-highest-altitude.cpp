class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int highst = 0;
        for( int g : gain){
            curr += g;
            highst = max(highst, curr);
        }
        return highst;
    }
};