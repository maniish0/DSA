class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int maxi = 0;
      int cnt = 0;
      for(int i = 0; i< nums.size(); i++){
        if(nums[i] == 1){
           cnt++;
           maxi = max(maxi,cnt);
        }
        else {
            cnt = 0;
        }

      }
        
        return maxi;

    }
};


// we star fron the first element to the end of the arr and checks repeation of "1" and store in  "cnt" and then return the max (store in maxi) of "cnt"