

class Solution
{
    public int NthTerm(int n)
    {
        // code here
        long result = 1;
        long mod = 1000000007;
        for(int i=1;i<=n;i++){
            result = ((result*i) + 1) % mod;
        }
        return (int)result;
    }
}