class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        // Step 1: Merge equal neighbors
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        // Step 2: Collect non-zeros first
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                result.push_back(nums[i]);
        }

        // Step 3: Pad with zeros at the end
        while (result.size() < n)
            result.push_back(0);

        return result;
    }
};