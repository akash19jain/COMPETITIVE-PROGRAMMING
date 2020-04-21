class MinStack 
{
public:
    /** initialize your data structure here. */
    deque<int> st;
    int minVal;
    MinStack() 
    {
        
    }
    
    void push(int x) {
        if (st.empty() || x<minVal){
            minVal = x;
        }
        st.push_front(x);
    }
    
    void pop() 
    {
        if (st.front() == minVal){
            st.pop_front();
            minVal=INT_MAX;
            for (deque<int>::iterator it = st.begin();it!=st.end();it++){
                minVal = min(minVal,*it);
            }
        }else{
            st.pop_front();
        }
    }
    
    int top() 
    {
        return st.front();
    }
    
    int getMin() 
    {
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */