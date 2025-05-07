class Solution {
public:
    int maxPower(string s) {
        int res = 0;
        int l = 0, r = 0;
        while (r < s.size()) {
            while (r < s.size() && s[l] == s[r]) 
            r++;
            res = max(res, r - l);
            l = r;
        }
        return res;
    }
};