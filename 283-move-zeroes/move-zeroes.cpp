class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1; // set j = -1 (-1 means I haven’t found any zero yet.) This variable will track the position 
                    //of the first zero found in the array.
        int n = nums.size();
        for(int i = 0; i < n; i++){  // whenver we find any zero store its index in  "j"
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
         // no non zero elements
         if(j == -1) 
            return;
         

         for(int i = j + 1; i < n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }

         }
        
    }
};