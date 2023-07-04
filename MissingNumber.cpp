
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int totalSum = (n * (n+1)) / 2;
        for(auto it : array) {
            totalSum -= it;
        }
        return totalSum;
    }
};