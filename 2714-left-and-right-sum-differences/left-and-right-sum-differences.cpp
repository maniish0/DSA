class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        int leftSum = 0, rightSum = 0;
        
        for (int x : nums) rightSum += x;
        
        for (int i = 0; i < n; i++) {
            rightSum -= nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }
        
        return answer;
    }
};