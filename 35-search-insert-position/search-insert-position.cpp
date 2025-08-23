class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int size = nums.size();
        for (int i = 0 ; i < size ; i++){
            if(nums[i]==target){
                return i;
            }
        }
        int q=size-1;
        while(q>=0){
            if(target==0 && nums[0]>0){
                return 0;

            }
            if(nums[q]<target){
                return q+1;
            }
            else if(nums[0]>target){
                return 0;
            }
            q--;
            
        }
        
        if (size == 1 && target>nums[0]){
            return 1;
        }
        else if (size == 1 && target<nums[0]){
            return 0;
        }
        return -1;
    }
};