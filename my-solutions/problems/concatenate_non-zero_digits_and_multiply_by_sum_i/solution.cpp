class Solution {
public:
    long long sumAndMultiply(int n) {
        string a=to_string(n);
        long long sum=0,x=0;
        for(int i=0;i<a.size();i++)
        {
            int b=a[i]-'0';
            if(b==0)
            continue;
            x=x*10+b;
            sum+=b;
        }
        return x*sum;
    }
};