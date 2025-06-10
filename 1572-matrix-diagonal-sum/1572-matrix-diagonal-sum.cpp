class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = 0;      
        auto lambda = [&](int sum, vector<int> vec) {
            sum = sum + vec[row] + (row == vec.size()-row-1 ? 0:vec[vec.size()-row-1]);
            row++;
            return sum;
        };       
	    int result =  accumulate(mat.begin(), mat.end(), 0, lambda);        
        return result;
    }
};