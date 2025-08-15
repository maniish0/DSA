class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
            return false;  //becouse the number must be positive to be a power of four
        }
        while(n %4 == 0){
            n /= 4;
        }
        return n == 1;
        
    }
};