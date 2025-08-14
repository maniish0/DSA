class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        map<int,int> mp;
        int n  = nums.size();
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mp.find(moreNeeded) != mp.end()){
                return{mp[moreNeeded], i};
        
            }

            mp[num] =i ;
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

    