class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> temp = mat;
        int m = mat.size();
        int n = mat[0].size();
        k = k % n;  
        // very import line becouse after k rotation the outputs are repeating
        // itself again and again so we dont need to do the operation after k rotations.

        for (int i = 0; i < mat.size(); i++) {
            if (i % 2 == 0) {
                rotate(rbegin(mat[i]), rbegin(mat[i]) + k, rend(mat[i]));
            } else {
                rotate(begin(mat[i]), begin(mat[i]) + k, end(mat[i]));
            }
        }
        return temp == mat;
    }
};