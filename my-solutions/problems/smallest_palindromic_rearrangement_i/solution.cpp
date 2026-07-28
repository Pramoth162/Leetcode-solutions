class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int freq[26]={0};
        for(char c:s)
        {
            freq[c-'a']++;
        }
        string left="";
        string middle="";

        for(int i=0;i<26;i++)
        {
            int a=freq[i]/2;
            for(int j=0;j<a;j++)
            {
                left.push_back('a'+i);
            }
            if(freq[i]%2!=0)
            middle.push_back('a'+i);
        }
        string right=left;
        reverse(right.begin(),right.end());
        string ans=left+middle+right;
        return ans;
    }

};