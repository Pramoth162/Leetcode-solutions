class Solution {
public:
    int mySqrt(int x) {
        int high=x,low=0;
        if(x==0||x==1) return x;
        int ans;
        while(low<=high)
        {
            int m=low+(high-low)/2;
            if(m<=x/m)
            {
                ans=m;
                low=m+1;
            }
            else
            high=m-1;
        }
        return high;
    }
};