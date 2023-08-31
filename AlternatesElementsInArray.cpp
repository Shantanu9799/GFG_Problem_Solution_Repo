void print(int ar[], int n)
{
    // code here
    int prevIndex = 1;
    for(int i = 2; i < n; i += 2) {
        ar[prevIndex++] = ar[i];
    }
    for(int i = 0; i < (n + 1) / 2; i++) {
        cout << ar[i] << " ";
    }
}