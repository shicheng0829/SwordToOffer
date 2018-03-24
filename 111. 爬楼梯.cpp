class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int big = 2;
        int small = 1;
        int result;
        for(int i = 2; i < n; i++)
        {
            result = big + small;
            small = big;
            big = result;
        }
        return result;
    }
};