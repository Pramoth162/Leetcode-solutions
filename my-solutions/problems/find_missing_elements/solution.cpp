class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int prev=nums[0];
        for(int i=1;i<n;i++)
        {
           while(nums[i]!=prev+1)
           {
           ans.push_back(++prev);
           }
           prev=nums[i];
        }
        return ans;
    }
};