class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWth = 0;

        for(int i = 0; i < accounts.size(); i++){
            int currWth = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                currWth += accounts[i][j];
            }
            maxWth = max(maxWth,currWth);
            
        }
        return maxWth;
        
    }
};