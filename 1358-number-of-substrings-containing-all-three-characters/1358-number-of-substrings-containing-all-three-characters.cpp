class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        int lastA = -1, lastB = -1, lastC = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') lastA = i;
            else if (s[i] == 'b') lastB = i;
            else if (s[i] == 'c') lastC = i;

            cnt += min({lastA, lastB, lastC}) + 1;
        }

        return cnt;
    }
};