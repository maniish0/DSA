class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int res = 0;
        int n = cost.size();
        for (int i = 0; i < n; ++i) {
            if (i % 3 != 2) {
                res += cost[i];
            }
        }
        return res;
    }
};


/*

cost = [9, 7, 6, 5, 2, 2]  (after sorting)

i=0, cost[0]=9 → 0%3=0 ≠ 2 → PAY 9
i=1, cost[1]=7 → 1%3=1 ≠ 2 → PAY 7
i=2, cost[2]=6 → 2%3=2   → FREE (skip)
i=3, cost[3]=5 → 3%3=0 ≠ 2 → PAY 5
i=4, cost[4]=2 → 4%3=1 ≠ 2 → PAY 2
i=5, cost[5]=2 → 5%3=2   → FREE (skip)





*/