class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
       long long start=0,sum=0,count=0;
       for(int i=0;i<nums.size();i++)
       {
        sum+=nums[i];
        while(sum*(i-start+1)>=k){
            sum-=nums[start];
            start++;
        }
        count+=i-start+1;
       }
       return count;
    }
};