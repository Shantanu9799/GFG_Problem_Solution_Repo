class Solution {
  public:
  
    stack<int> s;
    stack<int> minS;
  
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        s.push(x);
        
        if(minS.empty() || minS.top() >= x) minS.push(x);
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(s.empty()) return;
        int x = s.top();
        s.pop();
        
        if(minS.top() == x) minS.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(s.empty()) return -1;
        return s.top();
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(minS.empty()) return -1;
        return minS.top();
    }
};
