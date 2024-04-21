class Solution {
  public:
    string consecutiveVal(int n, vector<int> &a) {
        // code here
        set<int> s;
        for(int i : a) s.insert(i);
        string binString;
        for(int i : a) {
            auto posLess = s.find(i-1);
            auto posGrt = s.find(i+1);
            if(posLess != s.end() || posGrt != s.end()) binString += '1';
            else binString += '0';
        }
        return binString;
    }
};