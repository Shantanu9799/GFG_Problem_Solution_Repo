class Solution{
    
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		// creating a array of B size
		int range[B+1] = {0};
		
		for(int i = 0; i < n; i++) {
		    if(arr[i] <= B) { // because there is no impotant of considering the elements which are out of bounds.
		        range[arr[i]]++;
		    }
		}
		// checking every element is present in the array or not
		bool flag = true;
		for(int i = A; i <= B; i++) {
		    if(range[i] == 0) {
		        flag = false; // if not present, make the flag false
		        break;
		    }
		}
		// return the flag
		return flag;
	}

};