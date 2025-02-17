class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        // creating a min-heap to store the elemnts in ascending order
        // so that we can remove the smaller elemets later one by one
        priority_queue<int, vector<int>, greater<int>> pq;
        // add first k elements to create the queue to size k
        for(int i = 0; i < k; ++i) {
            pq.push(arr[i]);
        }
        // put every element by checking if it's grater than the queue top
        for(int i = k; i < arr.size(); ++i) {
            if(arr[i] > pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        // put all the elements inside a vector, from right to left
        vector<int> kLargeElem(k, 0);
        int idx = k-1;
        while(!pq.empty()) {
            kLargeElem[idx--] = pq.top();
            pq.pop();
        }
        return kLargeElem;
    }
};
