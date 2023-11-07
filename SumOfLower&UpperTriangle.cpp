
class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> sumT(2);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                sum += matrix[i][j];
            }
        }
        sumT[0] = sum;
        sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                sum += matrix[i][j];
            }
        }
        sumT[1] = sum;
       return sumT; 
    }
};