class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";

        for (int i = 0; i < num.length(); i++) {
            while (!st.empty() && k > 0 && st.back() > num[i]) {
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }

        while (k > 0) {
            st.pop_back();
            k--;
        }

        while (!st.empty() &&st[0] == '0') {
        st.erase(st.begin());
        }

        return st.empty() ? "0" : st;
    }
};