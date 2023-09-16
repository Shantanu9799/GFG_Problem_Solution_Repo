class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here 
        int maxLength = INT_MIN;
        for(int i = 0; i < n; i++) {
            maxLength = max(maxLength, arr[i]);
        }
        return maxLength;
    }
};