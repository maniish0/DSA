class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        // create a 2D array and build full triangle
        vector<vector<int>> ans;
        
        // fill all rows with 1s
        for(int i = 0; i <= rowIndex; ++i)
            ans.push_back(vector<int>(i + 1, 1));
        
        // fix inner values
        for(int i = 2; i <= rowIndex; ++i)
            for(int j = 1; j < ans[i].size() - 1; ++j)
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        
        // return only the last row
        return ans[rowIndex];
    }
};