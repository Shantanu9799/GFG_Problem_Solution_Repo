class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        int majorElm = a[0];
        int cnt = 1;
        
        // finding the mjority element
        for(int i = 1; i < size; i++) {
            if(majorElm == a[i]) {
                cnt++;
            } else {
                cnt--;
            }
            if(cnt == 0) {
                cnt = 1;
                majorElm = a[i];
            }
        }
        
        // checking if the element is actually the majority among all elements.
        cnt = 0;
        for(int i = 0; i < size; i++) {
            if(majorElm == a[i]) {
                cnt++;
            }
        }
        
        // if it's cnt is greater than N/2 , return the element
        if(cnt > (size/2)) {
            return majorElm;
        }
        
        // return -1
        return -1;
    }
};