class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        sort(arr.begin(), arr.end(), [x](int a, int b) {
            int diff = abs(a - x) - abs(b - x);
            return diff == 0 ? a < b : diff < 0;
        });
        vector<int> result(arr.begin(), arr.begin() + k);
        sort(result.begin(), result.end());
        return result;
    }
};