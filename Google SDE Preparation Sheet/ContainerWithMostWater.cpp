long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long maxiArea = 0;
    int i = 0, j = len-1;
    while(i < j) {
        int mini = min(A[i], A[j]);
        int distance = j - i;
        long long area = mini * distance;
        maxiArea = max(maxiArea, area);
        if(A[i] > A[j]) {
            j--;
        } else {
            i++;
        }
    }
    return maxiArea;
}