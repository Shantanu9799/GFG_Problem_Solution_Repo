class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        
        // base condition
        if(N <= 1) {
            return 0;
        }
        
        // main logic
        long long sum = 1;
        for(long long i = 2; i <= sqrt(N); i++) {
            if((N % i) == 0) {
                sum += i;
                if((N / i) != i) {
                    sum += (N / i);
                }
            }
        }
        
        // return statemenet 
        return sum == N ? 1 : 0;
        
        // tc - O(sqrt(N))         sc - O(1)
    }
};