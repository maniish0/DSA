class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        vector<int> result;
        for(int i = 0; i < n-1; i++){
            int m = INT_MIN;
            for(int j = i+1; j < n; j++){
                m = max(m, arr[j]);
            }
            result.push_back(m);
        }
        result.push_back(-1);

        return result;
        
    }
};