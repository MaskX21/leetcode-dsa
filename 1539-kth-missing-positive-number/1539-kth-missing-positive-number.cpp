class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> temp;
        
        int num = 1;
        int i = 0;
        
        while (temp.size() < k) {
            if (i < arr.size() && arr[i] == num) {
                i++;
            } else {
                temp.push_back(num);
            }
            num++;
        }
        
        return temp.back();
    }
};