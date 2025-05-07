class Solution {
public:
   int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> firstIndex;
        int maxLen = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (firstIndex.count(s[i])) {
                int len = i - firstIndex[s[i]] - 1;
                maxLen = max(maxLen, len);
            } else {
                firstIndex[s[i]] = i;
            }
        }

        return maxLen;
    }
};