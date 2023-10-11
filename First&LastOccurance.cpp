class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int f = firstOcc(arr, n, x);
        int l = lastOcc(arr, n, x);
        if(f >= n || l < 0 || f > l) return {-1};
        return {f, l};
    }
    int firstOcc(vector<int> &arr, int n, int x) {
        int s = 0, e = n - 1;
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] >= x) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return s;
    }
    int lastOcc(vector<int> &arr, int n, int x) {
        int s = 0, e = n - 1;
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] <= x) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return e;
    }
};