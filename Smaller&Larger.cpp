//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int>smallndLarge;
	    int More = n - large(arr, n, x);
	    int Less = small(arr, n, x);
	    if(More == -1) {
	        More = 0;
	    }
	    if(Less == n + 1) {
	        Less = n;
	    }
	   // cout << Less << " " << More << endl;
	    smallndLarge.push_back(Less);
	    smallndLarge.push_back(More);
	    return smallndLarge;
	    
	}
	int small(int arr[], int n, int x) {
	    int s = 0, e = n;
	    while(s <= e) {
	        int mid = s + (e-s) / 2;
	        if(arr[mid] <= x) {
	            s = mid + 1;
	        } else {
	            e = mid - 1;
	        }
	    }
	    return s;
	}
    // this is bascially lowerbound
	int large(int arr[], int n, int x) {
	    int s = 0, e = n;
	    while(s <= e) {
	        int mid = s + (e-s) / 2;
	        if(arr[mid] >= x) {
	            e = mid - 1;
	        } else {
	            s = mid + 1;
	        }
	    }
	    return s;
	}
};