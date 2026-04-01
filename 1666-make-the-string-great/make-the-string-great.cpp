class Solution {
public:
    string makeGood(string s) {
        string stack;
        for (char c : s) {
            if (!stack.empty() && stack.back() != c &&
                tolower(stack.back()) == tolower(c)) {
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack;
    }
};