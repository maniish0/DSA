class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (const char& c : s) {
            if (c == '*') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(c);
            }
        }
        string res;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};