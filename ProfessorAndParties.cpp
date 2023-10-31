class Solution {

    public static String PartyType( long a[], int n)
    {
        // Your code goes here
        HashSet<Long> set = new HashSet<>();
        for(int i = 0; i < n; i++) {
            if(set.contains(a[i])) {
                return "BOYS";
            }
            set.add(a[i]);
        }
        return "GIRLS";
    }
}