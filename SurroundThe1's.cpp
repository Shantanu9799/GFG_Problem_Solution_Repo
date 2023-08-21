class Solution {
public:
    int Count(vector<vector<int>>& matrix) {
        // Code here
        int cnt = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int zeroCount = 0;
                if(matrix[i][j] == 1) {
                    if(j+1 < m) {
                        //side 1
                        if(matrix[i][j+1] == 0) {
                            zeroCount++;
                        }
                        //side 6
                        if(i-1 >= 0 && matrix[i-1][j+1] == 0) {
                            zeroCount++;
                        }
                        //side 8
                        if(i+1 < n && matrix[i+1][j+1] == 0) {
                            zeroCount++;
                        }
                    }
                    if(j-1 >= 0) {
                        //side 2
                        if(matrix[i][j-1] == 0) {
                            zeroCount++;
                        }
                        //side 5
                        if(i-1 >= 0 && matrix[i-1][j-1] == 0) {
                            zeroCount++;
                        }
                        //side 7
                        if(i+1 < n && matrix[i+1][j-1] == 0) {
                            zeroCount++;
                        }
                    }
                    if(i+1 < n) {
                        //side 3
                        if(matrix[i+1][j] == 0) {
                            zeroCount++;
                        }
                    }
                    if(i-1 >= 0) {
                        //side 4
                        if(matrix[i-1][j] == 0) {
                            zeroCount++;
                        }
                    }
                    // cout << matrix[i][j] << endl;
                }
                if(zeroCount > 0 && zeroCount%2 == 0) {
                    cnt++;
                    // cout << cnt << endl;
                }
            }
        }
        return cnt;
    }
};