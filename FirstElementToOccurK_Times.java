class Solution
{
    public int firstElementKTime(int[] a, int n, int k) { 
        HashMap<Integer, Integer> mpp = new HashMap<>();
        for(int i : a) {
            if(mpp.containsKey(i)) {
                mpp.put(i, mpp.get(i)+1);
            } else {
                mpp.put(i, 1);
            }
            if(mpp.get(i) == k) {
                return i;
            }
        }
        return -1;
    } 
}