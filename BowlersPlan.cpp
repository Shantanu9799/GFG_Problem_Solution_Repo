char kthUnique(int n, string &s, int k) {
    // Write your code here.
    int alph[26] = {0};
    for(int i = 0; i < n; i++) {
        if(alph[s[i] - 'a'] == 0) {
            k--;
            alph[s[i]- 'a'] = 1;
        }
        if(k == 0) return (char) ('a' + (s[i] - 'a'));
    } 
    return '?';
}
