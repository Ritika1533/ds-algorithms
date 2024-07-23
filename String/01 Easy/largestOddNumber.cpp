// https://leetcode.com/submissions/detail/1330661293/
#include <iostream>
#include <vector>
#include <string>
class Solution
{
public:
    string largestOddNumber(string num)
    {
        int i = num.length() - 1;
        while (i >= 0)
        {
            if ((num[i] - '0') % 2 != 0)
            {
                break;
            }
            i--;
        }
        return num.substr(0, i + 1);
    }
};