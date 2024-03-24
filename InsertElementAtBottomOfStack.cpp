class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> anotherST;
        while(!st.empty()) {
            anotherST.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!anotherST.empty()) {
            st.push(anotherST.top());
            anotherST.pop();
        }
        return st;
    }
};