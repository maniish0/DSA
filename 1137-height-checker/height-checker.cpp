class Solution {
public:
    int heightChecker(vector<int>& heights) {



        vector<int> heightToFreq(101, 0); 
        

        /* Count frequency of each height
        here we count the freq of each elements present in the array 
        for example : {1,1,4,2,1,3} 
        the freq of each ele are f[1] = 3, f[2] = 1 , f[3] = 1, f[4] = 1;
        */
        for (int height : heights) {
            heightToFreq[height]++;
        }
        
        int NumOFIncrrt = 0; // here we count the number of incorrect position of the students in a array.


        int curHeight = 0;
        
        // Compare with expected sorted order
        for (int i = 0; i < heights.size(); i++) {
          
            while (heightToFreq[curHeight] == 0) {
                curHeight++;
            }
            
            if (curHeight != heights[i]) {
                NumOFIncrrt++;
            }
            
            heightToFreq[curHeight]--;
        }
        
        return NumOFIncrrt;
    }
};
