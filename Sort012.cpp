class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int N)
    {
        // Your Code Here
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < N; i++) {
            if(arr[i] == 0) zero++;
            else if(arr[i] == 1) one++;
            else two++;
        }
        int index = 0;
        while(zero-- > 0) {
            arr[index++] = 0;
        }
        while(one-- > 0) {
            arr[index++] = 1;
        }
        while(two-- > 0) {
            arr[index++] = 2;
        }
    }
};