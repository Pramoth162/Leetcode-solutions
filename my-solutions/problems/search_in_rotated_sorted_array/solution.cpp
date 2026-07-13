class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int h=n-1,l=0;
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]==target)
            return m;
            else if(nums[m]>=nums[l])
            {
                if(nums[l]<=target&&nums[m]>target)
                h=m-1;
                else
                l=m+1;
            }
            else
            {
                if(nums[h]>=target&&nums[m]<target)
                 l=m+1;
                else
                 h=m-1;
            }
        }
        return ans;
    }
};