class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums) {
        // write your code here
        int min = nums[0];
        for(auto i : nums)
        {
            if(i < min)
                min = i;
        }
        return min;
            
    }
};

