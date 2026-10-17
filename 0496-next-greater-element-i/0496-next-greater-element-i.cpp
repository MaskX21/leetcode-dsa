
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> temp(n, -1);

        for (int i = 0; i < n; i++) {
            int j = 0;

            while (j < m && nums2[j] != nums1[i]) {
                j++;
            }

            for (int k = j + 1; k < m; k++) {
                if (nums2[k] > nums1[i]) {
                    temp[i] = nums2[k];
                    break;
                }
            }
        }

        return temp;
    }
};
