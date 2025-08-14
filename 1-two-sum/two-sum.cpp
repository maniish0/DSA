class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        map<int,int> mpp;
        int n  = nums.size();
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()){
                return{mpp[moreNeeded], i};
        
            }

            mpp[num] =i ;    //If no match is found, store the current number and its index in the map.This way, future iterations can check if this number is the missing pair for some later element.


        }
        
       
       return {-1,1} ;
    }
};






       // More better the previous one solution

       //int left = a , right =n-1;
    //    sort(book.begin() , book.end());
    //    while(left <right){
    //     int sum = book[left] + book[right];
    //     if(sum == target) {
    //         return "YES";
    //     }

    //     else if (sum < target) left++;
    //     else right--;
    //    }
    // return "NO";

    