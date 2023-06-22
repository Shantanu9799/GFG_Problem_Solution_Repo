class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int five = 0, ten = 0;
        for(auto i : bills) {
            if(i == 5) five++;
            if(i  == 10) {
                five--;
                ten++;
            } 
            if(i == 20) {
                if(ten > 0) {
                    ten--;
                    five--;
                } else {
                    five -= 3;
                }
            }
            
            if(five < 0) {
                return false;
            }
        }
        return true;
    }
};



// This is greedy algorithm.
// we are very greedy to take one after another