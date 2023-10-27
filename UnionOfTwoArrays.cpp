class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> Set;
        for(int i = 0; i < n; i++) {
            Set.insert(a[i]);
        }
        for(int i = 0; i < m; i++) {
            Set.insert(b[i]);
        }
        return Set.size();
    }
};