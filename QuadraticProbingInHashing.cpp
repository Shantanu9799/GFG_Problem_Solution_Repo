class Solution {
    // Function to fill the array elements into a hash table 
    // using Quadratic Probing to handle collisions.
    static void quadraticProbing(int[] hash, int hash_size, int arr[], int N) {
        // Initializing the hash table with -1
        Arrays.fill(hash, -1);
        
        // Loop through each element in the array
        for (int i = 0; i < N; ++i) {
            int j = 0;
            int originalIdx = arr[i] % hash_size;
            int idx = originalIdx;
            
            // Keep probing until an empty slot is found
            while (hash[idx] != -1) {
                j++;
                idx = (originalIdx + j * j) % hash_size;
            }
            
            // Place the element at the computed index
            hash[idx] = arr[i];
        }
    }
}
