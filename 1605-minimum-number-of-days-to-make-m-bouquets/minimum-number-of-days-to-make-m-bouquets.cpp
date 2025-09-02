class Solution {
public:
    bool possibleDays(vector<int>& bloomDay, int day, int m, int k) {
    int count = 0, total = 0;
    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= day) {
            count++;
            if (count == k) {
                total++;
                count = 0;  // reset after making one bouquet
            }
        } else {
            count = 0; // reset if flower not bloomed
        }
        if (total >= m) return true;
    }
    return false;
  }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()){
            return -1;
        }
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int low  = *min_element(bloomDay.begin(), bloomDay.end());

        while(low<high){
            int mid=(low+high)/2;
            if(possibleDays(bloomDay,mid,m,k)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};