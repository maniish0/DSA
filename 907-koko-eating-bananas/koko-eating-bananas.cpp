class Solution {
public:
    // Helper function to check if Koko can eat all bananas at 'speed' within 'h' hours
    bool canEatAll(vector<int>& piles, int speed, int h) {
        long long totalH = 0;
        for (int bananas : piles) {
            totalH += (bananas + speed - 1) / speed; // ceil division
            if (totalH > h) return false; // pruning
        }
        return totalH <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canEatAll(piles, mid, h)) {
                ans = mid;     // possible answer
                high = mid - 1; // try smaller speed
            } else {
                low = mid + 1; // need larger speed
            }
        }

        return ans;
    }
};
