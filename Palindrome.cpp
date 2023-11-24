class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int revN = 0;
		    int tmp = n;
		    while(tmp != 0) {
		        revN = (revN*10) + (tmp%10);
		        tmp /= 10;
		    }
		    return n==revN ? "Yes" : "No";
		}
};