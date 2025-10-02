class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        // Find first occurrence
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;  
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;  // keep looking left
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // int low = 0, high = n-1;
        // while(low <= high){
      
        // int mid = low +(high - low)/2;
        //   if(nums[mid] == target){
        //     first = mid;
        //     high = mid -1;
        //   }
        //   else if (nums[mid] < target){
        //     low = mid +1;
        //   }
        //    else {
        //      high = mid + 1;
        //   }      
        // } 



        // Find last occurrence
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;  // keep looking right
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};
