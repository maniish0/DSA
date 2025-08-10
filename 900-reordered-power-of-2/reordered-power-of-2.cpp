class Solution {
public:
     string getSortedStr(int n){
        string s = to_string(n);
        sort(begin(s), end(s));
        return s;
     }
    bool reorderedPowerOf2(int n) {
        string s = getSortedStr(n);

        //check all  2 powers and see if it match with 
        // We need only 2^0 to 2^29 becouse in ques it is given the range of n is 10^9 and 2^30 is out of the range

        for(int p = 0; p<=29; p++){ //p = power
            if(s == getSortedStr(1 << p)){ //leftshift 1 to get power
                return true;
            }
        }
        
        return false;
    }
};