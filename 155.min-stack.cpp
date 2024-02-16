class MinStack {
public:
    stack<int> s1,s2;
    MinStack() {
    }

    void push(int val) {
        this->s1.push(val);
        this->s2.push(min(val, this->s2.empty() ? INT_MAX : this->s2.top()));
    }

    void pop() {
        this->s1.pop();
        this->s2.pop();
    }

    int top() {
        return this->s1.top();
    }

    int getMin() {
        return this->s2.top();
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