class Solution {
public:
int digitSum(int num) {
int sum = 0;
while (num > 0) {
sum += num % 10;
num /= 10;
}
return sum;
}

int minSwaps(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> temp;

    for (int i = 0; i < n; i++) {
        temp.push_back({digitSum(nums[i]), nums[i]});
    }

    sort(temp.begin(), temp.end());

    vector<int> sorted;
    for (auto p : temp) {
        sorted.push_back(p.second);
    }

    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
        pos[nums[i]] = i;
    }

    int swaps = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != sorted[i]) {
            swaps++;

            int j = pos[sorted[i]];

            pos[nums[i]] = j;
            pos[sorted[i]] = i;

            swap(nums[i], nums[j]);
        }
    }

    return swaps;
}

};
