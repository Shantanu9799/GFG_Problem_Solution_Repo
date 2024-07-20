class Solution
{
    //Function to sort the binary array.
    static void binSort(int A[], int N)
    {
        // add your code here
        
        
        /**************
        * No need to print the array
        * ************/
        
        int zero = 0,  one = 0;
        for(int i = 0; i < N; ++i) {
            if(A[i] == 0) zero++;
            else one++;
        }
        
        int idx = 0;
        while(zero-- > 0) {
            A[idx++] = 0;
        }
        while(one-- > 0) {
            A[idx++] = 1;
        }
        
    }
}
