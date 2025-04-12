class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Use a set to store unique elements in descending order
        set<int, greater<int>> s;

        for (int num : nums) {
            s.insert(num);
        }

        // If there are at least 3 distinct elements, return the third one
        if (s.size() >= 3) {
            auto it = s.begin();
            advance(it, 2); // move iterator to the 3rd element
            return *it;
        }

        // Otherwise, return the largest
        return *s.begin();
    }
};
