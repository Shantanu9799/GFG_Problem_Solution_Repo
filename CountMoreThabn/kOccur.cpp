class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        
        int countOfElements = 0;
        
        for(auto i : mpp) {
            if(i.second > (n/k)) countOfElements++; 
        }
        
        return countOfElements;
        
    }
};