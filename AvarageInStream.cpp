class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float>Ans;
        int b[n];
        partial_sum(arr,arr+n,b);
        for(int i=0;i<n;i++){
            Ans.push_back(b[i]);
        }
        for(int i=0;i<n;i++){
            Ans[i]/=(i+1);
        }
        return Ans;
	}
};