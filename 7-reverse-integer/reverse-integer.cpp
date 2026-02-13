class Solution {
public:
    int reverse(int x) {
        long newX = 0, remDigits = 0;
        while(x != 0){
            remDigits = x % 10;
            newX = newX * 10 + remDigits;
            x /= 10;
        }
        if(newX > INT_MAX || newX < INT_MIN){
            return 0;
        }

        return newX;
        
    }
};