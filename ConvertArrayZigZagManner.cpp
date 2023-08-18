class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        bool lessThan = true;
        for(int i = 1; i < n; i++) {
            if(lessThan) {
                if(arr[i-1] > arr[i]) {
                    arr[i-1] = arr[i-1] ^ arr[i];
                    arr[i] = arr[i-1] ^ arr[i];
                    arr[i-1] = arr[i-1] ^ arr[i];
                }
            } else {
                if(arr[i-1] < arr[i]) {
                    arr[i-1] = arr[i-1] ^ arr[i];
                    arr[i] = arr[i-1] ^ arr[i];
                    arr[i-1] = arr[i-1] ^ arr[i];
                }
            }
            lessThan = !lessThan;
        }
    }
};