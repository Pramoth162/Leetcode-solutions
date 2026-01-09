class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
      vector<int> res;
      int b=n;
      for(int i=0;i<n;i++)
      {
        res.push_back(nums[i]);
        res.push_back(nums[b++]);

      }
      return res;

    }
};