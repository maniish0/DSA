class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        long long result = 0;
        int Tsum = 0;
        int Rpair = n / 2;

       
        for(int s : skill){
            Tsum += s;
        }

        //  Each pair must sum to this
        int mSkill = Tsum / Rpair; 

        // Check if evenly divisible
        if(Tsum % Rpair != 0) return -1;

        sort(skill.begin(), skill.end());

        int left = 0, right = n - 1;

        while(left < right){
            // filled your empty loop
            if(skill[left] + skill[right] != mSkill)
                return -1;

            result += (long long)skill[left] * skill[right];
            left++;
            right--;
        }

        return result;
    }
};