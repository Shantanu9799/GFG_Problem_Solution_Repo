class Solution
{
    ArrayList<Integer> countDistinct(int A[], int n, int k)
    {
        // code here 
        ArrayList<Integer> distinctCnt = new ArrayList<Integer>();
        Map<Integer, Integer> map = new HashMap<>();
        
        // first k size window
        for(int i = 0; i < k; ++i) {
            // if element is already present then incrase the value by 1
            if(map.containsKey(A[i])) map.put(A[i], map.get(A[i]) + 1);
            // else put value with 1
            else map.put(A[i], 1);
        }
        // put the size of the map to the answer list
        distinctCnt.add(map.size());
        // start from the k-th index
        for(int i = 1; i <= n-k; ++i) {
            // remove the first element
            int removeEle = A[i-1]; // i - k = 0 (because i is starting form k)
            // decrease the value of the element by 1
            map.put(removeEle, map.get(removeEle) - 1);
            // if the value of the element is 0, remove from the map
            if(map.get(removeEle) == 0) map.remove(removeEle);
            
            // add the i-th element
            int add = A[i+k-1];
            // if already present 
            if(map.containsKey(add)) map.put(add, map.get(add) + 1);
            // else
            else map.put(add, 1);
            
            // put the map size to the answer array
            distinctCnt.add(map.size());
        }
        
        return distinctCnt;
    }
}