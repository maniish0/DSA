class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> Set;
        for(int n :nums){
           if(Set.find(n) != Set.end(n)){
            return true;
           }
           Set.insert(n);
        }
        return false;
    }
};