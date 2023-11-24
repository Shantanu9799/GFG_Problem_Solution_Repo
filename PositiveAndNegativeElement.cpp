class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int> pos;
        vector<int> neg;
        for(int i = 0; i < n; i++) {
            if(a[i] >= 0) pos.push_back(a[i]);
            else neg.push_back(a[i]);
        }
        vector<int> A;
        int idx = 0;
        int p = 0, ne = 0;
        while(idx < n) {
            if((idx & 1) == 0) {
                A.push_back(pos[p++]);
            } else {
                A.push_back(neg[ne++]);
            }
            idx++;
        }
        return A;
    }
};