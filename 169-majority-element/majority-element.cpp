class Solution {
public:
    int majorityElement(vector<int>& nums) {

    //moore
        int n = nums.size();
        int count = 0;
        int maj = 0;  // initialize properly

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                maj = nums[i];  // assume new candidate
                count = 1;
            } 
            else if (nums[i] == maj) {
                count++;
            } 
            else {
                count--;
            }
        }

        return maj;
    }
};
