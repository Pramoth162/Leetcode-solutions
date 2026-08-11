class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int> ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            ans.push(s[i]);
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') 
            {
            if (ans.empty()) return false;
            
            char top = ans.top();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == ']' && top != '[') ||
                (s[i] == '}' && top != '{')) {
                return false;
            }
            ans.pop();
       
        }
        }
    return ans.empty();
    }
};