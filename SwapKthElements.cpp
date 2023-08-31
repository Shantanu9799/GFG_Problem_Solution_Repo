class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    // code here
	    int i = k - 1;
	    int j = n - k;
	    if(i != j) {
	        arr[i] = arr[i] ^ arr[j];
    	    arr[j] = arr[i] ^ arr[j];
    	    arr[i] = arr[i] ^ arr[j];
	    }
	}
};