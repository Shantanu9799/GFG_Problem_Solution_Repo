class Solution {
    int[] kLargest(int[] arr, int n, int k) {
        // code here
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int i = 0; i < k; i++) {
            pq.add(arr[i]);
        }
        for(int i = k; i < n; i++) {
            if(arr[i] > pq.peek()) {
                pq.poll();
                pq.add(arr[i]);
            }
        }
        int[] KthLargestElements = new int[k];
        int i = 0;
        while (!pq.isEmpty()) {
            KthLargestElements[i++] = pq.peek();
            pq.poll();
        }
        reverseArray(KthLargestElements, k);
        return KthLargestElements;
    }
    
    int[] reverseArray(int[] x, int k) {
        int i = 0;
        int j = k-1;
        while(i < j) {
            x[i] = x[i]^x[j];
            x[j] = x[i]^x[j];
            x[i] = x[i]^x[j];
            i++;
            j--;
        }
        return x;
    }
    
}