class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int lastSquares = INT_MAX;
        for(auto it : arr) {
            lastSquares = min(lastSquares, it);
        }
        return lastSquares;
    }
};