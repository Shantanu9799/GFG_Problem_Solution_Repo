class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    
    // to reverse the cols
    vector<vector<int>> reverseColumn(vector<vector<int>> matrix, int n) {
        int f = 0, l = n-1;
        while(f < l) {
            for(int i = 0; i < n; i++) {
                swap(matrix[f][i], matrix[l][i]);
            }
            f++; l--;
        }
        return matrix;
    }
    
    
    // transpose of a matrix
    vector<vector<int>> transpose(vector<vector<int>> matrix, int n) {
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        return matrix;
    }
    
    
    
    void rotateby90(vector<vector<int>>& matrix, int n) 
    { 
        // code here 
        matrix = transpose(matrix, n);
        matrix = reverseColumn(matrix, n);
    } 
};