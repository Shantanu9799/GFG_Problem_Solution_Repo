//User function Template for C++
class Solution
{
public:
    void printTillN(int N)
    {
        // Write Your Code here
        if(N < 1) return;
        printTillN(N-1);
        cout << N << " ";
    }
};