class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        int closer = -1;
        int absDiff = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(absDiff >= abs(arr[i] - target)) { // finding the closer one
                closer = arr[i];
                absDiff = abs(arr[i] - target); // updating the absDiff value
            }
        }
        return closer;
    } 
};