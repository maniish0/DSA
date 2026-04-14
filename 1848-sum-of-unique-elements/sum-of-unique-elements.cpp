class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq [101] = {0};
        
        for(int x :nums){
            freq[x]++;
        }
        int sum = 0;
        //couz constrain says th value inside the arr nums if from 1 to 100 only
        //"1 <= nums[i] <= 100", so use this for loop
        for(int i = 1; i <= 100; i++){
            if(freq[i] == 1){
                sum += i;
            }
        }
        return sum;



        
    }
};