class Solution {
public:
    string getEncryptedString(string s, int k) {
       string ans="";
       int n= s.size();
       for(int i=0;i<n;i++)
       {
        int pos=(i+k)%n;
        ans+=s[pos];
       }
       return ans;
    }
};