class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> neg;
        int idx = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) {
                neg.push_back(arr[i]);
            } else {
                arr[idx++] = arr[i];
            }
        }
        
        int i = 0, size = neg.size();
        while(i < size) {
            arr[idx++] = neg[i++];
        }
    }
};