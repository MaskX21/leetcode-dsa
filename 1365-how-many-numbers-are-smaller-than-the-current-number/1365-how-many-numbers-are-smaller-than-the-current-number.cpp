class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        vector<int> ans;

        for(int num : nums) {
            int cnt = lower_bound(temp.begin(), temp.end(), num) - temp.begin();
            ans.push_back(cnt);
        }

        return ans;
    }
};