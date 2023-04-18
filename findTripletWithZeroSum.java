// variety 1
class Solution
{
    // arr[]: input array
    // n: size of the array
    //Function to find triplets with zero sum.
	public boolean findTriplets(int arr[] , int n)
    {
        //add code here.
        Arrays.sort(arr);
        for(int i=0; i<n; i++) {
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == 0) {
                   return true;
                } else if(sum < 0) {
                    j++;
                } else{
                    k--;
                }
            }
        }
        return false;
    }
}


// variety 2
import java.util.*;

public class Solution {
    public static List<List<Integer>> triplet(int n, int []arr) {
        // Write your code here.
        Arrays.sort(arr);
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == 0) {
                    ArrayList<Integer> temp = new ArrayList<>();
                    temp.add(arr[i]);
                    temp.add(arr[j]);
                    temp.add(arr[k]);
                    list.add(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]) {
                        j++;
                    }
                    while(k<i && arr[k]==arr[k+1]) {
                        k--;
                    }
                } else if(sum < 0) {
                    j++;
                } else{
                    k--;
                }
            }
        }
        return list;
    }
}















Arrays.sort(arr);
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == 0) {
                    ArrayList<Integer> temp = new ArrayList<>();
                    temp.add(arr[i]);
                    temp.add(arr[j]);
                    temp.add(arr[k]);
                    list.add(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]) {
                        j++;
                    }
                    while(k<i && arr[k]==arr[k+1]) {
                        k--;
                    }
                } else if(sum < 0) {
                    j++;
                } else{
                    k--;
                }
            }
        }
        return list;