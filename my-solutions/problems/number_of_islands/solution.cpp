class Solution {
public:

    void dfs(vector<vector<char>>& grid,int r,int c,int row,int col)
    {
       if(r<0||r>=row||c<0||c>=col||grid[r][c]=='0')
       return;

       grid[r][c]='0';
       dfs(grid,r,c+1,row,col);
       dfs(grid,r+1,c,row,col);
       dfs(grid,r,c-1,row,col);
       dfs(grid,r-1,c,row,col);

    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()||grid[0].empty())
        return 0;

        int row=grid.size();
        int col=grid[0].size();
        int islandcount=0;

        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                if(grid[r][c]=='1')
                islandcount++;
                dfs(grid,r,c,row,col);
            }
        }
        return islandcount;
    }
};