class Solution
{
    public int find_median(int[] v)
    {
        // Code here
        int ans = 0;
        Arrays.sort(v);
        int n = v.length;
        if((n&1) == 0) {
            int sum = v[n/2 - 1] + v[n/2];
            ans = sum / 2;
        } else {
            ans = v[n/2];
        }
        return ans;
    }
}