class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); // length of array

        vector<int>temp(n); // Create a temporary array of same size

        for(int i=0;i<n;i++) //Loop through all elements of nums

        {
          temp[(i+k)%n] = nums[i];
          
         //Move nums[i] to its new position
          // Index 0 (1) → (0+3)%7 = 3
          // Index 1 (2) → (1+3)%7 = 4
         // Index 2 (3) → (2+3)%7 = 5
         // Index 3 (4) → (3+3)%7 = 6
         // Index 4 (5) → (4+3)%7 = 0
         // Index 5 (6) → (5+3)%7 = 1
         // Index 6 (7) → (6+3)%7 = 2


        }
        nums = temp; //Copy temp back to nums
        
    }
};

//for better explanation checkout the TG!
