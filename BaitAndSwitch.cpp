long long baitAndSwitch(int n, vector<int> &a, int k, int m) {
    // Write your code here.
    for(int i = 0; i < n; i++) {
        a[i] = abs(a[i] - m);
    }
    sort(a.begin(), a.end());
    long long maxRevenue = 0;
    for(int i = n-k; i < n; i++) {
        maxRevenue += a[i];
    }
    return maxRevenue;
}