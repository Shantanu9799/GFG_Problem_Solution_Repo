class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int revN = 0;
		    long long int tmp = n;
		    while(tmp != 0) {
		        revN = (revN*10) + (tmp%10);
		        tmp /= 10;
		    }
		    return revN;
		}
};