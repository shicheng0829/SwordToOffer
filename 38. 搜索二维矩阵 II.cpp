class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        int m = matrix.size();
        if(matrix.empty())
            return 0;
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i <= m-1 && j >= 0)
        {
            if(matrix[i][j] == target)
            {
                count++;
            }
            if(matrix[i][j] > target)
                j--;
            else
                i++;
            
        }
        return count;
    }
};