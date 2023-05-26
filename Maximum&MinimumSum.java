//User function Template for Java
class Solution {
    public int sumDiff(int []arr, int M) {
      // code here
      // i'm getting the N;
      int N = arr.length;
      
      // find the diff N-M
      int NminusM = N - M;
    //   System.out.println(NminusM);
      
      // Sort the array
      Arrays.sort(arr);
      
      // Find the sum of maxi's
      int maxi = 0;
      for(int i = N-1; i >= (N - NminusM); i--) {
          maxi += arr[i];
      }
    //   System.out.println(maxi);
      
      // Find the sum of mini's
      int mini = 0;
      for(int i = 0; i < NminusM; i++) {
          mini += arr[i];
      }
    //   System.out.println(mini);
      
      return (maxi-mini);
    }
}