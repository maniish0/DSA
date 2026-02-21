class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        auto isPrime= [](int x) {
            if (x < 2)
                return false;
            for (int d = 2; d * d <= x; d++){
                if (x % d == 0)
                    return false;
            }
            return true;
        };
        int res = 0;
        for (int i = left; i <= right; i++){
            int bits = __builtin_popcount((unsigned)i);
            if (isPrime(bits))
                res++;
        }
        return res;
    }
};