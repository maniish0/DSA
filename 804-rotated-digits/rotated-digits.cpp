class Solution {
public:
    bool isGood(int num){
        bool changed = false;

        while(num > 0){
            int digit = num % 10;
            if(digit == 3 || digit == 4 || digit == 7) return false;
            if(digit == 2 || digit == 5 || digit == 6 || digit == 9) changed = true;
             
            num /= 10;

        }
        return changed;

    }



    int rotatedDigits(int n) {

        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(isGood(i)){
                cnt++;
            }
        }
        return cnt;
    }
};


