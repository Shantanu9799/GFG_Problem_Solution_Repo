vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>> m;
    for(int i = 0; i < n; i++) {
        vector<int> v;
        for(int j = 0; j < M; j++) {
            v.push_back(a[j][i]);
        }
        m.push_back(v);
    }
    return m;
}
