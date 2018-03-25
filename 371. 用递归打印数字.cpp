class Solution {
public:
    /**
     * @param n: An integer
     * @return: An array storing 1 to the largest number with n digits.
     */
    vector<int> numbersByRecursion(int n) {
        // write your code here
        int max = 1;
        vector<int> num;
        int i = 0;
        while(i++ < n)
        {
            max *= 10;
        }
        for(i = 1; i < max; i++)
            num.push_back(i);
        return num;
    }
};

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An array storing 1 to the largest number with n digits.
     */
    vector<int> numbersByRecursion(int n) {
        // write your code here
        vector<int> result;
        num(n,0,result);
        return result;
    }
    void num(int n, int ans, vector<int> & result)
    {
        if(n == 0)
        {
            if(ans > 0)
                result.push_back(ans);
            return;
        }
        for(int i = 0; i <= 9; i++)
        {
            num(n-1,ans*10+i,result);
        }
    }
};