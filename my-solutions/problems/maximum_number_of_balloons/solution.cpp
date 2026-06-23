class Solution {
public:
    int maxNumberOfBalloons(string text) {
       int freq[26]={0};
        for(char c:text)
        {
            freq[c - 'a']++;
        } 
         int countb= freq['b' - 'a'];
         int counta= freq['a' - 'a'];
         int countl= freq['l' - 'a']/2;
         int counto= freq['o' - 'a']/2;
         int countn= freq['n' - 'a'];

        return min({countb,counta,countl,counto,countn});
    }
};