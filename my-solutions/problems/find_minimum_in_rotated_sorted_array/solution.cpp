class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high)
        {
            int m=low+(high-low)/2;
             if(nums[high]<nums[m])
                 low=m+1;
                else
                 high=m;
        }
        return nums[low];
    }
};