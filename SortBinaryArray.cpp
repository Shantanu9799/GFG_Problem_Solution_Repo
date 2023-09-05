class Solution{
  public:
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int zeroCount = 0;
        int oneCount = 0;
        for(int i = 0; i < N; i++) {
            if(A[i] == 0) zeroCount++;
            else oneCount++;
        }
        int i = 0;
        while(zeroCount-- > 0) {
            A[i++] = 0;
        }
        while(oneCount-- > 0) {
            A[i++] = 1;
        }
    }
};