class Solution {
  public:
    bool Palindrome(int n) {
        int revN = 0; int tmp = n;
        while(tmp != 0) {
            int rem = tmp%10;
            revN = (revN * 10) + rem;
            tmp /= 10;
        }
        return revN==n;
    }
    
    int sum(int n) {
        int sum = 0;
        while(n != 0) {
            int rem = n%10;
            sum += rem;
            n /= 10;
        }
        return sum;
    }
    
    int isDigitSumPalindrome(int N) {
        // code here
        return Palindrome(sum(N)) ? 1 : 0;
    }
};