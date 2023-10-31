class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int> even;
	    vector<int> odd;
	    for(int i = 0; i < n; i++) {
	        if((arr[i] & 1) == 0) even.push_back(arr[i]);
	        else odd.push_back(arr[i]);
	    }
	    sort(even.begin(), even.end());
	    sort(odd.begin(), odd.end());
	    int index = 0;
	    for(int i = 0; i < even.size(); i++) {
	        arr[index++] = even[i];
	    }
	    for(int i = 0; i < odd.size(); i++) {
	        arr[index++] = odd[i];
	    }
	}
};