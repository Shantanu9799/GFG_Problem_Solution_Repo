import java.util.*;

// User function Template for Java

class Solution {
    int MissingNumber(int array[], int n) {
        // Your Code Here
        int[] a = new int[n+1];
        Arrays.fill(a, 0);
        a[0] = 1;
        int num = n+1;
        for(int i=0; i<n-1; i++) {
            int mod = array[i]%num;
            a[mod] += 1;
        }
        int ans = 0;
        for(int i=0; i<n+1; i++) {
            if(a[i] == 0) {
                ans = i;
            }
        }
        return ans;
    }
}