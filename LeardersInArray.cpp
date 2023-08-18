class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> leader;
        int maxi = a[n-1];
        leader.push_back(maxi);
        for(int i = n-2; i >= 0; i--) {
            if(a[i] >= maxi) {
                leader.push_back(a[i]);
            }
            maxi = max(maxi, a[i]);
        }
        
        int i = 0, j = leader.size() - 1;
        while(i < j) {
            leader[i] = leader[i] ^ leader[j];
            leader[j] = leader[i] ^ leader[j];
            leader[i] = leader[i] ^ leader[j];
            i++; j--;
        }
        
        return leader;
    }
};