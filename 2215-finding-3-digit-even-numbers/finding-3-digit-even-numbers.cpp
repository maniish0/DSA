class Solution {
public:

    set<int> res;
    void recurse(vector<int>& digits, int pos, int curr, vector<bool>& used){
     if(pos == 3){
        if(curr % 2 == 0)
        res.insert(curr);
        return;
    }

    for(int i = 0; i < digits.size(); i++){
        if(used[i]) continue;

        if(pos == 0 && digits[i] == 0) continue;

        used[i] = true;
        recurse(digits, pos+1, curr*10 + digits[i] , used);
        used[i] = false;
    }
}    


vector<int> findEvenNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(), false);
        recurse(digits,0,0,used);
        return vector<int>( res.begin(), res.end());
    }
};