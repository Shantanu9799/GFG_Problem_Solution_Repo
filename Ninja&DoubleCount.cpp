bool binarySearch(int n, vector<int> arr, int target) {
    int s = 0, e = n-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == target) return true;
        else if(arr[mid] < target) s = mid+1;
        else e = mid-1;
    }
    return false;
}

int doubleCount(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(binarySearch(n, a, a[i]/2)) cnt++;
    }
    return cnt;
}
