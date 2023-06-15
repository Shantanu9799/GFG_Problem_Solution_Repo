//User function Template for Java

class Solution {
    public int colorfulCandies(int N, int K, int[] color) {
       // code here
       /*
       int maxi = 0;
       // go 0 till N-K
       for(int i = 0; i <= (N - K); i++) {
           //Hash set for finding the unique elements
           HashSet<Integer> set = new HashSet<>();
               
           // take  k elements
           for(int j = i; j < i+K; j++) {
               set.add(color[j]);
           }
           
           //updating the maxi
           maxi = Math.max(maxi, set.size());
       } 
       return maxi;
       */
       
       
       int maxi = 0;
        HashMap<Integer, Integer> countMap = new HashMap<>();
        
        // Initialize the count for the first window of size K
        for (int i = 0; i < K; i++) {
            countMap.put(color[i], countMap.getOrDefault(color[i], 0) + 1);
        }
        
        maxi = countMap.size();
        
        // Slide the window from 1 to N-K
        for (int i = 1; i <= N - K; i++) {
            // Remove the leftmost element from the window
            int leftColor = color[i - 1];
            int leftCount = countMap.get(leftColor);
            if (leftCount == 1) {
                countMap.remove(leftColor);
            } else {
                countMap.put(leftColor, leftCount - 1);
            }
            
            // Add the rightmost element to the window
            int rightColor = color[i + K - 1];
            countMap.put(rightColor, countMap.getOrDefault(rightColor, 0) + 1);
            
            maxi = Math.max(maxi, countMap.size());
        }
        
        return maxi;
       
    }
}
