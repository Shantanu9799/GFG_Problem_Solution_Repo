// User function Template for C++
class Solution {
  public:
    int triple(int x) {
        return x*x*x;
    }
    string armstrongNumber(int n){
        // code here
        int N = 0;
        int tmp = n;
        while(tmp != 0) {
            N += triple(tmp%10);
            tmp /= 10;
        }
        return n==N ? "Yes" : "No";
    }
};