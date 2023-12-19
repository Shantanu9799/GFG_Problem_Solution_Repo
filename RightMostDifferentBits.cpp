class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int cnt = 0;
        while(m!=0 || n!=0) {
            if((m&1) != (n&1)) return ++cnt;
            cnt++;
            m = m >> 1;
            n = n >> 1;
        }
        return -1;
    }
};