class Solution {
public:
    bool rotateString(string& s, string& goal) {
        // Strings must be same length to be rotations of each other
        if (s.length() != goal.length()) {
            return false;
        }
        // Try all possible rotations of 's'
        for (int i = 0; i < s.length(); i++) {
            string rotated = s.substr(i) + s.substr(0, i);  
            if (rotated == goal) {
                return true;
            }
        }
        return false;
    }
};