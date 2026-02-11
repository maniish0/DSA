// range of power between 2^ -31 to 2^31-1(because we not include the 0 in this thats why the power will 31-1)

class Solution {
public:
    
    double solve(double x, long n) {
        
        if(n == 0)
            return 1;
        
        if(n < 0)
            return 1/solve(x, -n);
        
        
        if(n%2 == 0) {
            return solve(x*x, n/2);
        }
        
        return x*solve(x*x, (n-1)/2);
        
    }
    
    double myPow(double x, int n) {
        return solve(x, (long)n);
    }
};