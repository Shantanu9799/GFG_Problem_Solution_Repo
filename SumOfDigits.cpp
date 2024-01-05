class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int sum = 0;
        while(N) {
            sum += (N%10);
            N /= 10;
        }
        return sum;
    }
};