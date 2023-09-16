class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        
        // creating two vectors, one for even & one for odd
        vector<int> even, odd;
        for(long long i = 0; i < n; i++) {
            if((arr[i] & 1) == 0) {
                even.push_back(arr[i]);
            } else {
                odd.push_back(arr[i]);
            }
        }
        //sort them 
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        // put them accodingly to the main array
        int idx = 0;
        for(int i = odd.size()-1; i >= 0; i--) {
            arr[idx++] = odd[i];
        }
        for(int i = 0; i < even.size(); i++) {
            arr[idx++] = even[i];
        }
    }
};