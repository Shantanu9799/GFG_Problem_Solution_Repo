class Solution{
    public:
    string longest(string names[], int n)
    {
        string longest = "";
        for(int i = 0; i < n; i++) {
            if(names[i].size() > longest.size()) {
                longest = names[i];
            }
        }
        return longest;
    }
};