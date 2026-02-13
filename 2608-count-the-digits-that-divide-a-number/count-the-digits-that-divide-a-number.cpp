class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int copy=num;
        int res=0;
        while(copy>0){
            res=copy%10;
            copy/=10;
            if(res>0 && num%res==0){
                count++;
            }
        }
        return count;
    }
};