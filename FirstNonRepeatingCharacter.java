class Sol
{
    // return the first non-repeating char in S.
    // if there's no non-repeating char, return "-1"
    public static String find(String S)
    {
        //code here.
        int[] freq = new int[26]; // Create an array of size 26
        Arrays.fill(freq, 0); // Set each element of the array to -1

        for(int i = 0; i < S.length(); ++i) {
            // freqIdx which is the current alphabet 
            int freqIdx = S.charAt(i) - 'a';
            // store the frequency of the character
            freq[freqIdx]++;
        }
        // now check for the unique's one from the left side
        for(int i = 0; i < S.length(); ++i) {
            int character = S.charAt(i) - 'a';
            // if the charcter freq is 1 then return it immediately
            if(freq[character] == 1) return ""+S.charAt(i);
        }
        return "-1";
    }
    
}