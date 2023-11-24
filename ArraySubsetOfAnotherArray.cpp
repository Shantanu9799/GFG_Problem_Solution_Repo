string isSubset(int a1[], int a2[], int n, int m) {
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[a1[i]]++;
    }
    
    for(int i = 0; i < m; i++) {
        mpp[a2[i]]--;
    }
    
    for(auto it : mpp) {
        if (it.second < 0) return "No";
    }
    
    return "Yes";
    
}