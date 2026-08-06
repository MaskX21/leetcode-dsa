class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        for(int n = 0; n < numRows; n++){
            vector<int>row;
            long long result =1;

            row.push_back(1);

            for(int i =0; i<n;i++){
                result = result*(n-i);
                result = result/(i+1);

                row.push_back(result);
            }
            ans.push_back(row);
        }
        return ans;
      }
};