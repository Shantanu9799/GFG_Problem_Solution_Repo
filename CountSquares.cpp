class Solution {
  public:
    int countSquares(int N) {
        // code here
        int sq = (int) sqrt(N) * (int) sqrt(N) ;
        return sq==N ? sqrt(N)-1 : sqrt(N);
    }
};