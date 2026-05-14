class Solution {
public:
    bool isGood(vector<int>& nums) {
        //sort the Vector
        sort(nums.begin() , nums.end());

        int n = nums[nums.size()-1]; //largest eLe

        if(nums.size() != n+1){
            return false;
        }

        //check krna hoga koi ele repeat toh nhi hora
        for(int i = 0; i< nums.size()-2; i++){
            if(nums[i] == nums[i+1]){
                return false;
            }
        }

        if(nums[nums.size()-2] != n){
            return false;
        }

        return true;


        
    }
};