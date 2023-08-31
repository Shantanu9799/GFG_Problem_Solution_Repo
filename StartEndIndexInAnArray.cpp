class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> startEndIndex(2, -1);
        for(int i = 0; i < n; i++) {
            if(a[i] == key) {
                if(startEndIndex[0] == -1) {
                    startEndIndex[0] = i;
                    startEndIndex[1] = i;
                } else {
                    startEndIndex[1] = i;
                }
            }
        }
        return startEndIndex;
    }
  
};