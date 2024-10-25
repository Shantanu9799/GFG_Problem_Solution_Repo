class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> newArr(n, 0);
        int idx = 0, i = 0, j = n - 1;
        while(i <= j) {
            if((idx & 1) == 0) {
                newArr[idx++] = arr[j];
                j--;
            } else {
                newArr[idx++] = arr[i];
                i++;
            }
        }
        return newArr;
    }
};
