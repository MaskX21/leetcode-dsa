

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxcnt = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            int freq[256] = {0};

            for (int j = i; j < n; j++) {
                 if (freq[s[j]] == 0) {
                  freq[s[j]] = 1;
                      cnt++;
                    }

                else {
                    break;
                }
            }

            maxcnt = max(cnt, maxcnt);
        }

        return maxcnt;
    }
};
