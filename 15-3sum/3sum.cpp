// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> res;
//         int n = nums.size();
//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; i++) {
//                 for (int k = j + 1; k < n; i++) {
//                     if (nums[i] + nums[j] + nums[k] == 0){
//                         res.insert({nums[i],nums[j],nums[k]});
//                     }
//                 }
//             }
//         }
//         return vector<vector<int>> (res.begin(), res.end())
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }
        return res;
    }
};