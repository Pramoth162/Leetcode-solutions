class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
          int n=nums.size();
          set<int> arr;
          for(int num:nums)
          {
            arr.insert(num);
          }
          int res =nums[0];
          for(int i=1;i<n;i++)
          {
            if(nums[i]==nums[i-1]+1)
            {
                res+=nums[i];
            }
            else
            break;
          }
        while(arr.contains(res))
        {
            res++;
        }
        return res;
    }
};