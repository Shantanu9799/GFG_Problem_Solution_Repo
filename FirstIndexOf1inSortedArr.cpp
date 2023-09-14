class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int ans = -1;
        int s = 0, e = n;
        while(s <= e) {
            int mid = s + (e-s) / 2;
            if(a[mid] == 1) {
                ans = mid; // update the ans variable
                e = mid - 1; // if we found, we can move to left to find any index less than my current index.
            } else {
                s = mid + 1;
            }
        }
        return ans; // return the ans variable.
    }
};