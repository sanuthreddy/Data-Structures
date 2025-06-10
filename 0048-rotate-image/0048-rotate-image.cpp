class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n = matrix.size();
        int m = matrix[0].size();
       //transpose  swap((i,j),(j,i)) need only upto j<i 
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){//reverse rows in tranpose matrix
            reverse(matrix[i].begin(), matrix[i].end());
        }  
    }
};