class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        vector<vector<int>>tmp;
        tmp=matrix;
        for(int k=0;k<n;k++){
            int i=0,j=n-1;
            while(i<=j){
                swap(tmp[k][i],tmp[k][j]);
                i++,j--;
            }
        }
        matrix.clear();
        matrix=tmp;
    }
};