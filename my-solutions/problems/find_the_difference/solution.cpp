class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum1=0,sum2=0,diff=0;
       for(char a:s)
       {
        sum1+=a;
       }
       for(char b:t)
       {
        sum2+=b;
       }
       diff=abs(sum1-sum2);
       return char(diff);
    }
};