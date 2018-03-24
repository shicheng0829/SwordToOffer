class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if(n == 1)
        	return 0;
        if(n == 2)
        	return 1;
        int bigger = 1;
        int smaller = 0;
        int result;
        for(int i = 2; i < n; i++)
        {
        	result = bigger + smaller;
        	smaller = bigger;
			bigger = result;
        }
        return result;
        
    }
};