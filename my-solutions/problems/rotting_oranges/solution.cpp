class Solution {
public:
    int orangesRotting(vector<std::vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int minutes = 0;
        
        while (true) {
            vector<pair<int, int>> toRot;
            
            for (int r = 0; r < rows; ++r) {
                for (int c = 0; c < cols; ++c) {
                    if (grid[r][c] == 1) {
                        if ((r > 0 && grid[r - 1][c] == 2) ||
                            (r < rows - 1 && grid[r + 1][c] == 2) ||
                            (c > 0 && grid[r][c - 1] == 2) ||
                            (c < cols - 1 && grid[r][c + 1] == 2)) {
                            toRot.push_back({r, c});
                        }
                    }
                }
            }
            
            if (toRot.empty()) {
                break;
            }
            
            for (auto& p : toRot) {
                grid[p.first][p.second] = 2;
            }
            
            minutes++;
        }
        
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 1) {
                    return -1;
                }
            }
        }
        
        return minutes;
    }
};