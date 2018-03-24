class Solution {
public:
    /*
     * @param num: An integer
     * @return: An integer
     */
    int countOnes(int num) {
        // write your code here
        int count = 0;
        unsigned int flag = 1;
        while(flag)
        {        
            if(num & flag)
                count++;
            flag = flag << 1;
        }
        return count;
    }
};

class Solution {
public:
    /*
     * @param num: An integer
     * @return: An integer
     */
    int countOnes(int num) {
        // write your code here
        int count = 0;
        while(num)
        {       
            count++;
            num = num &(num - 1);
        }
        return count;
    }
};