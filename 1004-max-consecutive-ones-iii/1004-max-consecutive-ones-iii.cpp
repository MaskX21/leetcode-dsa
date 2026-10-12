
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int l = 0;
        int maxlen = 0;
        int r = 0;
        int cnt = 0;

        while (r < n) {
            if (nums[r] == 0) {
                cnt++;
            }

            while (cnt > k) {
                if (nums[l] == 0) {
                    cnt--;
                }
                l++;
            }

            int len = r - l + 1;
            maxlen = max(maxlen, len);

            r++;
        }

        return maxlen;
    }
};

