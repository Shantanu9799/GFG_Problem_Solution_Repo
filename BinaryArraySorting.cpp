//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
        int zero = 0, one = 0;
        for(int i = 0; i < binArray.size(); i++) {
            if(binArray[i] == 0) zero++;
            else one++;
        }
        int index = 0;
        while(zero-- > 0) binArray[index++] = 0;
        while(one-- > 0) binArray[index++] = 1;
        return binArray;
    }
};