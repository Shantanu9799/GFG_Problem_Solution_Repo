#include <bits/stdc++.h>
using namespace std;

long long sumSquare(int n) {
    long long eachSquare = (long long) (n * (n+1) * ((long long)(2*n)+1)) / 6;
    long long toatalSquare = (n * (n+1))/2;
    toatalSquare *= toatalSquare;
    eachSquare = abs(eachSquare - toatalSquare);
    return eachSquare;
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        long long ans = sumSquare(n);
        cout << ans << endl;
    }
    return 0;
}
