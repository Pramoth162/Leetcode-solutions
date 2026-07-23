class Solution {
public:
    int coinChange(vector<int>& coins, int c) {
        int n=coins.size();
        int x=1e5;
        vector<vector<int>> dp(n+1,vector<int>(c+1,0));
        for(int i=0;i<=n;i++)
        dp[i][0]=0;
        for(int j=0;j<=c;j++)
        dp[0][j]=x;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][c] >= x ? -1 : dp[n][c];
    }
};