class Solution {
public:
    /*
     * @param nums: an array of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums) {
        // write your code here
        int i = 0;
        int j = nums.size() - 1;
        while(i < j)
        {
            while(nums[i] % 2 != 0 && i < j)
            {
                i++;
            }
            while(nums[j] % 2 == 0 && i < j)
            {
                j--;
            }
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
};