class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long Fine = 0;
        if((date & 1) == 0) {
            for(int i = 0; i < n; i++) {
                if((car[i] & 1) == 1) {
                    Fine += fine[i];
                }
            }
        } else {
            for(int i = 0; i < n; i++) {
                if((car[i] & 1) == 0) {
                    Fine += fine[i];
                }
            }
        }
        return Fine;
    }
};