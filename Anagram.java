class Solution
{    
    //Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a,String b)
    {
        
        // Your code here
        int[] ary = new int[26];
        for(int i=0; i<a.length(); i++) {
            int idx = a.charAt(i) - 'a';
            ary[idx] += 1;
        }
        
        for(int i=0; i<b.length(); i++) {
            int idx = b.charAt(i) - 'a';
            ary[idx] -= 1;
            if(ary[idx] < 0) {
                return false;
            }
        }
        
        int sum = 0;
        for(int i : ary) {
            sum += i;
        }
        
        return sum == 0;
        
    }
}