class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heightToFreq(101, 0);
        
        // Count frequency of each height
        for (int height : heights) {
            heightToFreq[height]++;
        }
        
        int result = 0;
        int curHeight = 0;
        
        // Compare with expected sorted order
        for (int i = 0; i < heights.size(); i++) {
            while (heightToFreq[curHeight] == 0) {
                curHeight++;
            }
            
            if (curHeight != heights[i]) {
                result++;
            }
            
            heightToFreq[curHeight]--;
        }
        
        return result;
    }
};
