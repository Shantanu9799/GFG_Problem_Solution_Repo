class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        pair<int, int> p;
        for(int i = 0; i < n; i++) {
            if(arr[i]==x) p.first++;
            if(arr[i]==y) p.second++;
        }
        if(p.first == p.second) return min(x, y);
        else if(p.first > p.second) return x;
        return y;
    }
};