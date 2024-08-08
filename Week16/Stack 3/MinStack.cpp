 // using a helper stack 
 class MinStack {
public:
    stack<int> st; 
    stack<int> helper; 

    MinStack() { // Constructor
    }

    void push(int val) {
        st.push(val);
        if (helper.empty() || val <= helper.top()) {
            helper.push(val);
        } else {
            helper.push(helper.top());
        }
    }
    
    void pop() {
        st.pop();
        helper.pop();   
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        return helper.top();
    }
};
