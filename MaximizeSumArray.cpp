class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        const int mod = 1e9 + 7;
        sort(a, a + n);
        long long int sum = 0;
        for(int i = 0; i < n; i++)
            sum += 1ll * a[i] * i;
        return sum % mod;
    }
};