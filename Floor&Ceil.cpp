pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int Floor = -1, Ceil = -1;
    int fDiff = INT_MAX, cDiff = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            if(arr[i] - x < cDiff) {
                Ceil = arr[i];
                cDiff = arr[i] - x;
            }
            
        }
        
        if(arr[i] <= x) {
           if(x - arr[i] <= fDiff) {
                Floor = arr[i];
                fDiff = x - arr[i];
            } 
        }
        
    }
    pair<int, int> p;
    p.first = Floor;
    p.second = Ceil;
    return p;
}