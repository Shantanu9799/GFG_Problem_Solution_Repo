class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long maxSum = INT_MIN;
        long sum = 0;
        for(int i = 0; i < K; i++) {
            sum += Arr[i];
        }
        maxSum = max(maxSum, sum);
        for(int i = 1; i <= N-K; i++) {
            sum += (Arr[K+i-1] - Arr[i-1]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};