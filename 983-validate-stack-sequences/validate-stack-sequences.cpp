class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        for(int n : pushed){
            st.push(n);
            while(i < popped.size() && !st.empty() && popped[i] == st.top()){
                st.pop();
                i++;
            }
        }
        return st.empty();
    }
};