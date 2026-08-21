class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> ans;
        ans.reserve(matrix.size());
        for(const auto& row:matrix)
        {
            int degree=accumulate(row.begin(),row.end(),0);
            ans.push_back(degree);
        }
        return ans;
    }
};