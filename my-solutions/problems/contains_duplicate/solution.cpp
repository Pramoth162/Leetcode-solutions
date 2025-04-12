class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            // If we’ve seen this number before, return true
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        // No duplicates found
        return false;
    }
};
