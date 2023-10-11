class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here

        // using binary search -> T.C - O(logx)      S.C - O(1)

        long long s = 1, e = x;
        while(s <= e) {
            long long mid = s + (e-s)/2;
            if(mid * mid <= x) {
                s = mid + 1;
            } else {
                 e = mid - 1;
            }
        }
        return e;
    }
};