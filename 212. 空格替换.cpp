class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // write your code here
        if(length == 0)
            return 0;
        int space = 0;
        for(int i = 0; i < length; i++)
        {
            if(string[i] == ' ')
                space++;
        }
        int newlength = length + space * 2;
        int result = newlength;
        while(newlength >= 0 && length >= 0)
        {
            if(string[length] == ' ')
            {
                string[newlength--] = '0';
                string[newlength--] = '2';
                string[newlength--] = '%';
            }
            else
                string[newlength--] = string[length];
            length--;
        }
        return result;
        
    }
};