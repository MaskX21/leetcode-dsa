class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int row = 0;
        int colmn = m-1;
        while(row<n && colmn >=0){
            if(matrix[row][colmn] == target){
                return true;
            }else if(matrix[row][colmn] < target){
                row++;
            }else{
                colmn--;
            }
        }
        return false;
    }
};