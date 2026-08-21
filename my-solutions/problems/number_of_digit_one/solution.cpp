class Solution {
public:
    int countDigitOne(int n) {
        long long ans=0;
        for(long long p=1;p<=n;p*=10)
            ans+=(n/p+8)/10*p+(n/p%10==1)*(n%p+1);
        return ans;
    }
};