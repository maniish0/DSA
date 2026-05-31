class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long m = mass;
        for(auto it:asteroids)
        {
            if(m >= it)
            {
                m += it;
            }
            else return false;
        }

        return true;
    }
};