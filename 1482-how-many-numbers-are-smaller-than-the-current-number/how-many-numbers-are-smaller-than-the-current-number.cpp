class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(102, 0);

        for (int num : nums)
            freq[num]++;

        for (int i = 1; i <= 101; i++)
            freq[i] += freq[i - 1];

        vector<int> result;
        for (int num : nums)
            result.push_back(num == 0 ? 0 : freq[num - 1]);

        return result;
    }
};