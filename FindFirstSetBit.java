class Solution
{
    //Function to find position of first set bit in the given number.
    public static int getFirstSetBit(int n){
        // Your code here
        int cnt = 0;
        while(n != 0) {
            if((n & 1) == 1) {
                return cnt+1;
            } else {
                cnt++;
            }
            n = n >> 1;
        }
        return cnt;
    }
}