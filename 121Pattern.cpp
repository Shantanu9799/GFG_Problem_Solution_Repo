class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i <= n; i++) {
            // space
            for(int j = 1; j <= n-i; j++) {
                cout << " ";
            }
            // first half
            for(int j = 1; j <= i; j++) {
                cout << (char)(64 + j);
            }
            // second half
            for(int j = i-1; j >= 1; j--) {
                cout << (char)(64 + j);
            }
            cout << endl;
        }
    }
};