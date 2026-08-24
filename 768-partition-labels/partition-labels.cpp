class Solution {
public:
std::vector<int> partitionLabels(std::string s) {
        std::vector<int> last(26, 0);
        
        // Step 1: Record the last occurrence index of each character
        for (int i = 0; i < s.length(); ++i) {
            last[s[i] - 'a'] = i;
        }
        
        std::vector<int> result;
        int start = 0;
        int max_reach = 0;
        
        // Step 2: Iterate through the string and find partition boundaries
        for (int i = 0; i < s.length(); ++i) {
            max_reach = std::max(max_reach, last[s[i] - 'a']);
            
            // Step 3: When current index reaches max_reach, cut the partition
            if (i == max_reach) {
                result.push_back(i - start + 1);
                start = i + 1;
            }
        }
        
        return result;
    }
};