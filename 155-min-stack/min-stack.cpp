class MinStack {
public:
    stack<int> stk;
    MinStack() {}

    void push(int val) { stk.push(val); }

    void pop() { stk.pop(); }

    int top() { return stk.top(); }

    int getMin() {
        stack<int> stk2;
        int mini = stk.top();
        while (stk.size()) {
            mini = min(mini, stk.top());
            stk2.push(stk.top());
            stk.pop();
        }
        while (stk2.size()) {
            stk.push(stk2.top()); stk2.pop();
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */