// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int r=0;
        int l=n;
        while(r<=l)
        {
            int m=l+(r-l)/2;
        //    if(isBadVersion(r))
        //    return r;
            if(isBadVersion(m))
            l=m-1;
            else
            r=m+1;
        }
        return r;
    }
};