class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a=k;
        for(int num:nums)
        {
            if(num==a)
            a+=k;
        }
        return a;
    }
};