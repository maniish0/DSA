class Solution {
public:
    int mySqrt(int x) {
        long long int low = 1, high = x;
        long long int ans = 1; 
        if(x == 0) return 0;
        while(low <= high){
         long long int  mid = (low + high) /2;
        
            if(mid * mid <= x){
                ans = mid;
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
        
    }
};