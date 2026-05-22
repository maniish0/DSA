class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        int n = names.size();
        vector<pair<int, string>> people(n);

        for (int i = 0; i < n; i++) {
            people[i] = {heights[i], names[i]};
        }
        sort(people.begin(), people.end(), greater<>());
        vector<string> res;
        for (auto& p : people) {
            res.push_back(p.second);
        }
        return res;
    }
};