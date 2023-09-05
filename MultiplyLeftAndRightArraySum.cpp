int multiply(int arr[], int n)
{
    // Complete the function
    int mid = n / 2;
    int leftHalf = 0;
    int rightHalf = 0;
    for(int i = 0; i < mid; i++) {
        leftHalf += arr[i];
    }
    for(int i = mid; i < n; i++) {
        rightHalf += arr[i];
    }
    return leftHalf*rightHalf;
}