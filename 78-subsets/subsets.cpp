#include <vector>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
        // Base case: processed all elements → save current subset
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        // Choice 1: INCLUDE nums[index]
        current.push_back(nums[index]);
        solve(nums, index + 1, current, result);

        // Choice 2: EXCLUDE nums[index] (backtrack)
        current.pop_back();
        solve(nums, index + 1, current, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        solve(nums, 0, current, result);
        return result;
    }
};