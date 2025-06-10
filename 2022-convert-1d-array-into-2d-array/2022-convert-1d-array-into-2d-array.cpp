class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> result(m, vector<int>(n));//convert 1d to 2d r/n for row r%n for col
        for (int i = 0; i < original.size(); ++i) {
            result[i / n][i % n] = original[i];
        }
        
        return result; 
    }
};