class MyStack {
public:
    
    queue<int> q1;
    queue<int> q2;

    
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
         int n = q1.size();
        while(n > 1) {
            int e = q1.front();
            q2.push(e);
            q1.pop();
            n--;
        }
        int x = q1.front();
        q1.pop();
        
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    int top() {
        int n = q1.size();
        while(n > 1) {
            int e = q1.front();
            q2.push(e);
            q1.pop();
            n--;
        }
        int x = q1.front();
        q1.pop();
        
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(x);
        return x;

    }
    
    bool empty() {
         return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */