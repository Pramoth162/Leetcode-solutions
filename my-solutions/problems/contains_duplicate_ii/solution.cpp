class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> see;
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            if(see.find(val) != see.end()&& i-see[val]<=k)
            {
                return true;
            }
            see[val]=i;
        }
        return false;
    }
};