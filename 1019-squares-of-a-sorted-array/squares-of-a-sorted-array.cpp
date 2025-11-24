class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    
    //APPROACH 1

    //step 1 (sq the elements)

    for(int i = 0; i < nums.size(); i++){
        nums[i] = (nums[i] * nums[i]);
    }

    //step 2: (sort the arr)
    sort(begin(nums), end(nums));

    return nums;



















    //     vector<int> res(nums.size(), 0);
    //     int left = 0;
    //     int right = nums.size() - 1;

    //     for (int i = nums.size() - 1; i >= 0; i--) {
    //         if (abs(nums[left]) > abs(nums[right])) {
    //             res[i] = nums[left] * nums[left];
    //             left++;
    //         } else {
    //             res[i] = nums[right] * nums[right];
    //             right--;
    //         }
    //     }
    //     return res;        
    }
};