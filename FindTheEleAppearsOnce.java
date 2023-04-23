class Sol
{
    public static int search(int A[], int N)
    {
        // your code here
        int start = 0;
        int last = N-2;
        while(start <= last) {
            // int mid = (start + last) >> 1;
            int mid = start + ((last-start) >> 1);
            if(A[mid] == A[mid^1]) {
                start = mid + 1;
            } else {
                last = mid-1;
            }
        }
        return A[start];
    }
}