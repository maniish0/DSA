class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int lastOne = -1; // not found yet
        for (int i = 0; i < nums.size(); i++) {
            // we check only if we found any "1"
            // if we found "0" skip..
            if (nums[i] == 1) {
                if (lastOne != -1 && i - lastOne - 1 < k) {
                    return false;
                }
                lastOne = i;
            }
        }
        return true;
    }
};