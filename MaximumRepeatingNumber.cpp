class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    int freq[k] = {0};
	    for(int i = 0; i < n; i++) {
	        freq[arr[i]]++;
	    }
	    
	    int maxi = 0, ele = -1;
	    for(int i = 0; i < k; i++) {
	        if(freq[i] > maxi) {
	            ele = i;
	            maxi = freq[i];
	        }
	    }
	    
	    return ele;
	}

};