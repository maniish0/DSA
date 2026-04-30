class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // vector<int> arr1, arr2;
        // int res = 0;
        // int n = arrays.size();
        
        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         arr1 = arrays[i];
        //         arr2 = arrays[j];
        //         res = max(res ,abs(arr1[0] - arr2[arr2.size()-1]));
        //         res = max(res ,abs(arr2[0] - arr1[arr1.size()-1]));
        //     }
        // }
        // return res;
       
        int res = 0;
        int curMin = arrays[0].front();
        int curMax = arrays[0].back();

        for(int i = 1; i < arrays.size(); i++){
            res = max(res, abs(arrays[i].back()  - curMin));
            res = max(res, abs(arrays[i].front() - curMax));

            curMin = min(curMin, arrays[i].front());
            curMax = max(curMax, arrays[i].back());
        }

        return res;

    }
};