class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int Xor = 0;
        for(int i = 0; i < n; i++) {
            Xor ^= arr[i];
        }
        return Xor;
    }
};