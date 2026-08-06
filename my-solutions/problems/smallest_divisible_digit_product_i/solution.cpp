class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int re=n;re<=n+t;re++)
        {
            int pre=1;
            int cur=re;
            while(cur>0)
            {
                pre=pre*(cur%10);
                cur=cur/10;
            }
            if(pre%t==0)
            return re;
        }
        return n;
    }
};