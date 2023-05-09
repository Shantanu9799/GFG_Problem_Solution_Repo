class Solution{
    public int[] binaryArray(int n, int arr[]){
        // Code Here.
        int suffixSum = 0;
        // total sum of the array
        for(int i : arr) {
            suffixSum += i;
        }
        // return karne k liye array
        int[] returnArray = new int[n];
        // idx cnt rkahne k liye
        int idx = 0;
        int prefixSum = 0;   //prefix sum is the prev ele's sum 
        for(int i=0; i<n; i++) {
            int sum = suffixSum + prefixSum - arr[i];      // 31 + 0 - 1 = 30 => even => 1
            if((sum&1) == 0) {  // sum => even/odd
                returnArray[idx++] = 1;   // even => 1
            } else {
                returnArray[idx++] = 0;    // odd => 0
            }
            prefixSum += arr[i];
            suffixSum -= arr[i];
        }
        return returnArray;
    }
}