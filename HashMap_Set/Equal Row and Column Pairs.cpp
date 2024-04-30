class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        for(auto x:grid) {mp[x]++;}
        vector<vector<int>> cols;
        int n = grid.size();
        for(int i = 0; i<n;i++) {
            vector<int> t;
            for(int j = 0;j<n;j++) {
                t.push_back(grid[j][i]);
            }  
            cols.push_back(t);
        }
        int c = 0;
        for(auto x:cols) {c+=mp[x];}
        return c;
    }
};
