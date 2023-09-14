class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int firstHalf = 0, lastHalf = 0, start = 0, last = n-1;
       // using two pointers to add form both end simultaneously
       while(start < last) {
           firstHalf += a[start];
           lastHalf += a[last];
           start++, last--;
       }
    //   cout << firstHalf << " " << lastHalf << endl;
       return abs(firstHalf - lastHalf);
    }
};