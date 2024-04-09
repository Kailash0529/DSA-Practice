class MyQueue {
public:
stack<int> a,b;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int pop=-1;
        if(!b.empty())
        {
             pop=b.top();
             b.pop();
        }
        else{
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            pop=b.top();
            b.pop();
        }
        return pop;
    }
    
    int peek() {
        int front=-1;
        if(!b.empty())
        {
            front=b.top();

        }
        else{
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            front=b.top();

        }
        return front;
    }
    
    bool empty() {
        return a.empty()&&b.empty();
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