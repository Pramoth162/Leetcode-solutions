class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int temp=n;
        int sum=0;
        int pro=1;
        while(temp>0)
        {
            int dig=temp%10;
            sum+=dig;
            pro*=dig;
            temp/=10;  
        }
        if(n%(sum+pro)==0)
        return true;
        else
        return false;
    }
};