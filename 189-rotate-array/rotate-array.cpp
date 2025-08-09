class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); // Find length of array
        vector<int>temp(n); // Create a temporary array of same size
        for(int i=0;i<n;i++) //Loop through all elements of nums

        {
            temp[(i+k)%n] = nums[i]; //Move nums[i] to its new position
        }
        nums = temp; //Copy temp back to nums
        
    }
};

//for more check out the TG!

