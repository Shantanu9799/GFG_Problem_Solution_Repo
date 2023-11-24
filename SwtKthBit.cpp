class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1 << K;
        N = N | mask;
        return N;
    }
    
};