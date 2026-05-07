class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int curSum = 0;
        int min_len = INT_MAX;

        for(int right = 0; right < nums.size(); right++){
            curSum += nums[right];

            while(curSum >= target){
                min_len = min(min_len , right-left+1);
                curSum-= nums[left];
                left++;
            }
        }
       return min_len == INT_MAX ? 0 : min_len;
    }
};