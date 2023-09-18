class Solution{
public:
	int maxProduct(int arr[], int n) {
	    // code here
	    int maxi = INT_MIN;
	    int secondMaxi = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] > maxi) {
	            secondMaxi = maxi;
	            maxi = arr[i];
	        } else if(arr[i] <= maxi && arr[i] > secondMaxi) {
	            secondMaxi = arr[i];
	        }
	    }
	    return maxi * secondMaxi;
	}
};