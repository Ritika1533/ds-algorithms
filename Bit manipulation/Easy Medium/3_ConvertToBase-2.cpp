// https://leetcode.com/problems/convert-to-base-2/description/
class Solution
{
public:
    string baseNeg2(int x)
    {
        if (x == 0)
            return "0";
        string res = "";
        while (x != 0)
        {
            int rem = x % -2;
            x = x / -2;
            if (rem < 0)
            {
                rem = rem + 2;
                x = x + 1;
            }
            res = to_string(rem) + res;
        }
        return res;
    }
};