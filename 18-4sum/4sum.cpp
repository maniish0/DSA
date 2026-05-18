class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]--;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < nums.size(); j++) {
                count[nums[j]]--;
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                for (int k = j + 1; k < nums.size(); k++) {
                    count[nums[k]]--;
                    if (k > j + 1 && nums[k] == nums[k - 1]) continue;

                    long long fourth = target - (nums[i] + nums[j] + 0LL + nums[k]);
                    if (fourth < INT_MIN || fourth > INT_MAX) continue;
                    if (count[fourth] > 0) {
                        res.push_back({nums[i], nums[j], nums[k], int(fourth)});
                    }
                }

                for (int k = j + 1; k < nums.size(); k++) {
                    count[nums[k]]++;
                }
            }

            for (int j = i + 1; j < nums.size(); j++) {
                count[nums[j]]++;
            }
        }

        return res;
    }
};