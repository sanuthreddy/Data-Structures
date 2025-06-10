class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row, 0));//m*n to n*m
        for (int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                ans[j][i] = matrix[i][j];//transpose (i,j) to (j,i)

        return ans;
    }
};