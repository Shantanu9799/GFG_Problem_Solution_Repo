//User function Template for C++
class Solution
{
public:
    long long jumpyBall(long long N)
    {
        // Write Your Code here
        long long distanceCovers = 0;
        while(N != 0) {
            distanceCovers += (2 * N);
            N /= 2;
        }
        return distanceCovers;
    }
};
