class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int result = 0;
        unordered_map<int, int> rowMasks;

        for (const auto& rs : reservedSeats) {
            int r = rs[0];
            int c = rs[1];
            if (c >= 2 && c <= 9) {
                rowMasks[r] |= (1 << (c - 2));
            }
        }

        for (const auto& [row, mask] : rowMasks) {
            bool leftPossible   = !(mask & 0b00001111); // seats 2, 3, 4, 5
            bool rightPossible  = !(mask & 0b11110000); // seats 6, 7, 8, 9
            bool middlePossible = !(mask & 0b00111100); // seats 4, 5, 6, 7

            if (leftPossible && rightPossible) {
                result += 2;
            } else if (leftPossible || rightPossible || middlePossible) {
                result += 1;
            }
        }

        // Add 2 groups for all rows without any reserved seats
        int unvisitedRows = n - rowMasks.size();
        result += unvisitedRows * 2;

        return result;
    }
};