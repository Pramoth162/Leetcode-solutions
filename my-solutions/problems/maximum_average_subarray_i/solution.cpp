class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<k;i++)
        ans+=nums[i];
        int maxAns=ans;
        for(int i=k;i<n;i++)
        {
            ans=ans-nums[i-k]+nums[i];
            maxAns=max(maxAns,ans);
        }
        return (double) maxAns/k;
    }
};