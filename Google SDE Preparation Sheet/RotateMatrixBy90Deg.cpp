vector<vector<int>> transpose(vector<vector<int>> matrix) {
     int n = matrix.size();
     for(int i = 0; i < n; i++) {
         for(int j = i+1; j < n; j++) {
             swap(matrix[i][j], matrix[j][i]);
         }
     }
     return matrix;
 }
 
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    matrix = transpose(matrix);
    int n = matrix.size();
    int s = 0, e = n-1;
    while(s < e) {
        for(int i = 0; i < n; i++) {
            swap(matrix[s][i], matrix[e][i]);
        }
        s++; e--;
    }
}