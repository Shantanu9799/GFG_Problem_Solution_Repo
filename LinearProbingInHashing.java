class Solution{
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    int[] linearProbing(int hash_size, int arr[], int sizeOfArray)
    {
        //Your code here
        int[] hash = new int[hash_size];
        Arrays.fill(hash, -1);

        for (int i = 0; i < sizeOfArray; ++i) {
            int element = arr[i];
            int orgIndex = element % hash_size;
            int index = orgIndex;
            boolean inserted = false;

            // Loop to find an empty slot or stop if the table is full.
            while (hash[index] != -1) {
                // If the element is already present in the hash table, skip it.
                if (hash[index] == element) {
                    inserted = true;
                    break;
                }
                index = (index + 1) % hash_size;
                // If we looped back to the original index, the table is full.
                if (index == orgIndex) {
                    inserted = true;
                    break;
                }
            }

            // Insert the element if it was not inserted in the loop.
            if (!inserted) {
                hash[index] = element;
            }
        }
        return hash;
    }
}