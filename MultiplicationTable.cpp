class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> table;
        for(int i = 1; i <= 10; i++) {
            table.push_back(N * i);
        }
        return table;
    }
};