class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxlen = 0;
        map<int, int> mpp;
        int l = 0;
        int r = 0;

        while (r < n) {
            mpp[fruits[r]]++;

            if (mpp.size() > 2) {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0)
                    mpp.erase(fruits[l]);
                l++;
            }

            int len = r - l + 1;
            maxlen = max(maxlen, len);
            r++;
        }

        return maxlen;
    }
};