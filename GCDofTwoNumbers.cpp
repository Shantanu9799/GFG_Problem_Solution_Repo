//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if(A==0 || B==0) return 0;
	    if(A==B) return A;
	    if(A > B) return gcd(A-B, B);
	    else return gcd(A, B-A);
	} 
};