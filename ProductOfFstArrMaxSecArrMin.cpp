class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        long long product = find_max(a, n) * find_min(b, m);
        return product;
    }
    int find_max(int x[], int size) {
        int maxi = INT_MIN;
        for(int i = 0; i < size; i++) {
            maxi = max(maxi, x[i]);
        }
        return maxi;
    }
    int find_min(int x[], int size) {
        int mini = INT_MAX;
        for(int i = 0; i < size; i++) {
            mini = min(mini, x[i]);
        }
        return mini;
    }
};