class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string ans = "";

        for (int i = 0; i < num; i++) {
            // Largest digit we can place here while still making
            // the remaining positions feasible.
            int d = min(9, sum);

            while (sum - d > 9 * (num - i - 1))
                d--;

            ans += char('0' + d);
            sum -= d;
        }

        return ans;
    }
};