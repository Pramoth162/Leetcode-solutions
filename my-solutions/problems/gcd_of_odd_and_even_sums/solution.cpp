class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        for(int i=1;i<=n;i++)
        {
        sumeven+=2*i;
        sumodd+=2*i-1;
        }
        int ans=gcd(sumodd,sumeven);
        return ans;
    }
};