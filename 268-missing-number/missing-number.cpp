class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int Sum=0;
        for(int i:nums){
            Sum+=i;
        }
       return n*(n+1)/2-Sum; //formula of sum of first natural numbers
    }
};


// in this problem we add the all elements (present in the arr) and subtract from the first nums(N) natural numbers acc to the problem