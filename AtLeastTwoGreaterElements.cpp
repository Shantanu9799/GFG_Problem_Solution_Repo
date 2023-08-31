class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        sort(a, a+n);
        vector<int> ans(n-2);
        for(int i = 0; i < n-2; i++) {
            ans[i] = a[i];
        }
        return ans;
    }
};