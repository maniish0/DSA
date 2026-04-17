class Solution {
public:
      int getReverse(int n){
        int rev = 0;

        while(n > 0){
            int rem = n%10;
            rev = rev*10 + rem;

            n/= 10;
        }
        return rev;
      }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp; // har number ka reversed aur uska index
        int result = INT_MAX;//minise krna h toh badaq value lelete hain

        for(int i = 0; i < n; i++){
          //belows if checks ki aisa koi number toh nhi jiska reverse abhi ke num ke equal ho...agar yes then res = min(result, i - mp[nums[i]]) (us number ka index
            if(mp.count(nums[i]))
            {
                result = min(result, i- mp[nums[i]]);
            }
            //aur agar nhi mila toh current number ka reverse store krlenge 
            mp[getReverse(nums[i])] = i;
        }
        return result == INT_MAX ? -1 : result;
    }
};