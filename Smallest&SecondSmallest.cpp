vector<int> minAnd2ndMin(int a[], int n) {
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < secondSmallest) {
            secondSmallest = a[i];
        }
    }
    vector<int> ans;
    if(secondSmallest == INT_MAX) {
        ans = {-1};
    } else {
        ans = {smallest, secondSmallest};
    }
    return ans;
}