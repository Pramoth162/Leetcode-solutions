class MyStack {
    private:
    queue<int> qq;
public:
    MyStack() {}
    
    void push(int x) {
        qq.push(x);
        for(int i=0;i<qq.size()-1;i++)
        {
            qq.push(qq.front());
             qq.pop();
        }
    }
    
    int pop() {
        int top=qq.front();
        qq.pop();
        return top; 
    }
    
    int top() {
        return qq.front();
    }
    
    bool empty() {
        return qq.empty();
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