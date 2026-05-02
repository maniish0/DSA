class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>result;

        for(int i =0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        for(int i = 0; i < n; i++){
            if (nums[i] != 0)
            result.push_back(nums[i]);
        }

        //move zeroes to the end
        while(result.size() < n){
            //sari places p zero put krdo
            result.push_back(0);
        }
        return result;
    }
};