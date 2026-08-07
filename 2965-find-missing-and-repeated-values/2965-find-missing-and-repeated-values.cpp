
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mpp;

        // Count frequency of every number
        for (auto row : grid) {
            for (int num : row) {
                mpp[num]++;
            }
        }

        int repeated = -1;
        int missing = -1;

        int n = grid.size();

        // Numbers should be from 1 to n*n
        for (int i = 1; i <= n * n; i++) {
            if (mpp[i] == 2) {
                repeated = i;
            }

            if (mpp[i] == 0) {
                missing = i;
            }
        }

        return {repeated, missing};
    }
};