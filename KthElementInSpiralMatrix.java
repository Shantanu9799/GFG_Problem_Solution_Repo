class Solution
{
    /*You are required to complete this method*/
    int findK(int matrix[][], int n, int m, int k)
    {
	// Your code here	
	    int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                k--;
                if(k == 0) {
                    return matrix[top][i];
                }
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                k--;
                if(k == 0) {
                    return matrix[i][right];
                }
            }
            right--;
            if(top <= bottom) {
                for (int i = right; i >= left; i--) {
                    k--;
                    if(k == 0) {
                        return matrix[bottom][i];
                    }
                }
                bottom--;
            }
            if(left <= right) {
                for (int i = bottom; i >= top; i--) {
                    k--;
                    if(k == 0) {
                        return matrix[i][left];
                    }
                }
                left++;
            }
        }
        return 0;
    }
}