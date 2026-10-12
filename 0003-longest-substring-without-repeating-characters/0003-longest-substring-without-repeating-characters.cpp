class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcnt = 0;
        int n = s.length();
        int freq[256] = {0};
        int l = 0;

        for (int r = 0; r < n; r++) {
            freq[s[r]]++;

            while (freq[s[r]] > 1) {
                freq[s[l]]--;
                l++;
            }

            int cnt = r - l + 1;
            maxcnt = max(maxcnt, cnt);
        }

        return maxcnt;
    }
};