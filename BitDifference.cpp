class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int num = a ^ b;
        int cnt = 0;
        while(num > 0) {
            if((num & 1) == 1) cnt++;
            num = num >> 1;
        }
        return cnt;
    }
};