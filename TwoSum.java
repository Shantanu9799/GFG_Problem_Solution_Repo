class Solution
{
    // A[] : the input array of positive integers
    // N : size of the array arr[]
    // X : the required sum
    public boolean keypair(int[] A, int N, int X)
    {
        // code here
        Set<Integer> set = new HashSet<Integer>();
        for(int i = 0; i < N; ++i) {
            if(set.contains(X - A[i])) return true;
            set.add(A[i]);
        }
        return false;
    }
}