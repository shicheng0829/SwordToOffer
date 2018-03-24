class Solution {
public:
    /**
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        int m = matrix.size();
        if(m == 0)
            return false;
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        while(i <= m-1 && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            if(matrix[i][j] > target)
                j--;
            else
                i++;
            
        }
        return false;
    }
};