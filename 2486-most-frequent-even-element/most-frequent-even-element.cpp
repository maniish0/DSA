class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>map;
        for(auto v:nums)if(v%2==0)map[v]++;
        if(map.empty())return -1;

        pair<int,int>p;
        p.first=INT_MIN; // 
        p.second=-1; // freq
        for(auto  [val,freq] :map){
            if(freq>p.second){
                p.second=freq;
                p.first=val;
            }
        }

        return  p.first;
    }
};