class Solution{
public:

    long long fact(int n) {
        if(n == 0 || n == 1) return 1;
        long long f = fact(n-1);
        return n * f;
    }

    long long nPr(int n, int r){
        // code here
        long long factN = fact(n);
        long long factNR = fact(n - r);
        return factN / factNR;
    }
};