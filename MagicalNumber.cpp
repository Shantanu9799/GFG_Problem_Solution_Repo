int binarySearch(int arr[], int low, int high)
{
      //add code here.
      while(low <= high) {
          int mid = low + (high-low)/2;
          if(arr[mid] == mid) return arr[mid];
          else if(arr[mid] > mid) high = mid-1;
          else low = mid+1;
      }
      return -1;
}