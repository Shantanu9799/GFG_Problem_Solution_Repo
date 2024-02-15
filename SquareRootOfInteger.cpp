#include <bits/stdc++.h> 
int squareRoot(int a)
{
	// Write your code here.
	if(a == 0 || a == 1) return a;
	int s = 1, e = a;
	while(s <= e) {
		int mid = s + (e-s)/2;
		if(mid*mid <= a) s = mid + 1;
		else e = mid - 1;
	}
	return e;
}