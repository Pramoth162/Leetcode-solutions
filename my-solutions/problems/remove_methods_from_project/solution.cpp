class Solution {
public:
    
    void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited)
    {
        visited[node]=true;
        for(int next:adj[node])
        {
            if(!visited[next])
            {
                dfs(next,adj,visited);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) 
    {
       vector<vector<int>> adj(n);
       for(auto edge:invocations)
       {
         int u=edge[0];
         int v=edge[1];
         adj[u].push_back(v);
       }
       vector<bool> visited(n,false);
       dfs(k,adj,visited);
       vector<int>ans;
        for(auto edge : invocations)
        {
            int u = edge[0];
            int v = edge[1];

            if(!visited[u] && visited[v])
            {
                for(int i=0;i<n;i++)
                {
                    ans.push_back(i);
                }
                return ans;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            ans.push_back(i);
        }
         return ans;
    }
};