class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        priority_queue<pair<int,string>> pq;

        int n = names.size();

        for(int i = 0; i < n; i++) {
            pq.push({heights[i], names[i]});
        }

        int i = 0;

        while(!pq.empty()) {

            names[i++] = pq.top().second;

            pq.pop();
        }

        return names;
    }
};