#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        q.push(x);
        int size = q.size();
        for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int topVal = q.front();
        q.pop();
        return topVal;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
