class MinStack {
    stack<int> s;
    stack <int> minStack;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        s.push(val);
        if(!(minStack.empty()) && minStack.top() >= val){
           minStack.push(val);
        }else if (minStack.empty()){
           minStack.push(val);
        }
    }
    
    void pop() {
        if(!(minStack.empty()) && !(s.empty())){
               if(minStack.top() == s.top()){
                  s.pop();
                  minStack.pop();
               }else{
                  s.pop();
               }
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
         return minStack.top();
    }
};
