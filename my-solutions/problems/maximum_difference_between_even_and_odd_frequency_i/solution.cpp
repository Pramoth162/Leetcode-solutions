#include <string>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for (int count : freq) {
            if (count > 0) {
                if (count % 2 == 0) {
                    minEven = min(minEven, count);
                } else {
                    maxOdd = max(maxOdd, count);
                }
            }
        }

      
        if (maxOdd == INT_MIN || minEven == INT_MAX) {
            return 0;
        }

        return maxOdd - minEven;
    }
};
