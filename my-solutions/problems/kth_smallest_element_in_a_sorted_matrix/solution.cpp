class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int m=matrix.size(),n=matrix[0].size();
       priority_queue<int> maxheap;

       for(int r=0;r<m;++r)
       {
        for(int c=0;c<n;++c)
        {
            maxheap.push(matrix[r][c]);
            if(maxheap.size()>k)
            maxheap.pop();
        }
       } 
       return maxheap.top();
    }
};