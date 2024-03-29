class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>st1;
    stack<int>st2;
    void push(int x) {
        while(not(st2.empty())){
            st2.pop();
        }
        while(not(st1.empty())){
           
            st2.push(st1.top());   
            st1.pop();
        }
    st2.push(x);
    while(not(st2.empty())){
            st1.push(st2.top());  
        st2.pop();
        }
    }
    
    int pop() {
        int val=st1.top();
        st1.pop();
    return val;
    }
    
    int peek() {
    return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */