class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool found = false;
        int row = 0;
        int column = array[0].size() - 1;
        while(row < array.size() && column >= 0)
        {
        	if(array[row][column] == target)
        	{
        		found = true;
        		break;
        	}
        	else if(array[row][column] > target)
        		--column;
        	else
        		++row;
        }
        return found;
    }

};