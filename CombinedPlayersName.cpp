int stringReduction(string &s) {
    // Write your code here.
    int maxCount = 0;
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] == s[i+1]) maxCount++;
    }
    return maxCount;
}
