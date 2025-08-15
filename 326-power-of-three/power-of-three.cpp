class Solution {
public:
    static bool isPowerOfThree(int n) {
        // int e=log(INT_MAX)/log(3);
        // int N=pow(3, e);
        // return n>0 && N%n==0;
         
        if (n <= 0){
            return false;
        }
        while(n % 3 == 0){
            n/=3;
        }
        return n ==1;
    }
};