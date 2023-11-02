class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int minIndex = n;
        int idxX = -1, idxY = -1;
        for(int i = 0; i < n; i++) {
            if(a[i] == x) {
                if(idxY != -1) {
                    int d = abs(idxY - i);
                    minIndex = min(minIndex, d);
                } 
                idxX = i;
            }
            if(a[i] == y) {
                if(idxX != -1) {
                    int d = abs(idxX - i);
                    minIndex = min(minIndex, d);
                } 
                idxY = i;
            }
        }
        // cout << idxX << " || " << idxY;
        if(idxX==-1 || idxY==-1) return -1;
        return minIndex;
    }
};