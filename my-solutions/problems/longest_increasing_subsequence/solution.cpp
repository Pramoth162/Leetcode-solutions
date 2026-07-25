class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(auto it:nums)
        {
            auto pos=lower_bound(res.begin(),res.end(),it);
            if(pos==res.end())
            res.push_back(it);
            else
            *pos=it;
        }
        return res.size();
    }
};