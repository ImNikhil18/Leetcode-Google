class Solution {
public:
    bool removeOnes(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        for (int j = 0; j < n; ++j) {
            if (grid[0][j] == 1) {
                for (int i = 0; i < m; ++i) {
                    grid[i][j] = !grid[i][j];
                }
            }
        }
        
        for (int i = 0; i < m; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                count += grid[i][j];
            }
            
            if (count != 0 && count != n) {
                return false;
            }
        }
        return true;
    }
};
