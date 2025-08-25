class Solution {
public:
    
    int lower(vector<int>nums,int target,int low,int high){
        
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)ans=mid;
            if(nums[mid]>=target){
                 high=mid-1;
            }else low=mid+1;
        }return ans;
    }
    int upper(vector<int>nums,int target,int low,int high){
        
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)ans=mid;
            if(nums[mid]<=target){
                 low=mid+1;
            }else high=mid-1;
        }return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower(nums,target,0,nums.size()-1),upper(nums,target,0,nums.size()-1)};
    }
};