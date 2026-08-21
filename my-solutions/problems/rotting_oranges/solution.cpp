class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        while(1){
            vector<pair<int,int>> v;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]!=1) continue;
                    if(i&&grid[i-1][j]==2||i<n-1&&grid[i+1][j]==2||j&&grid[i][j-1]==2||j<m-1&&grid[i][j+1]==2)
                        v.push_back({i,j});
                }
            }
            if(v.empty()) break;
            for(auto p:v) grid[p.first][p.second]=2;
            ans++;
        }
        for(auto &r:grid)
            for(int x:r)
                if(x==1) return -1;
        return ans;
    }
};