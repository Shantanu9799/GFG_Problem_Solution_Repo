class Solution
{
    boolean checkIsAP(int arr[] ,int n)
    {
        // code here
        Arrays.sort(arr);
        int d = arr[1] - arr[0];
        for(int i = 1; i < n - 1; i++) {
            if(arr[i+1] - arr[i] != d) {
                return false;
            }
        }
        return true;
    }
}