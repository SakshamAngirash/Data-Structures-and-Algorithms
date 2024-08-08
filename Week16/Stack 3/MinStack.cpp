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

// best method : fake value =  2 * val - min 

class MinStack {
public:
    stack <long long> st; 
    long long min; 

    MinStack() {
        min = LLONG_MAX;
        
    }
    
    void push(int val) {
        long long x = (long long) val;
        if(st.size()==0)
        {
            st.push(x); 
            min=x;
        }
        else if(x<min){
            st.push(2*x - min); 
            min = x; 
        }
        else st.push(x);
    }
    
    void pop() {
        
        long long oldmin ; 
        if(st.top()<min) // case of fake entry 
        {
            oldmin = 2*min-st.top();
            min = oldmin;
            st.pop();
        }
        else st.pop();
    }
    
    int top() {
        if(st.top()<min)
        {
            return min;
        }
        return st.top();
        
    }
    
    int getMin() {
        return min;
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
