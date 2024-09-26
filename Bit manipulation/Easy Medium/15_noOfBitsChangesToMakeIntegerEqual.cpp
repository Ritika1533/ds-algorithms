// https://leetcode.com/problems/number-of-bit-changes-to-make-two-integers-equal/

class Solution
{
public:
    int minChanges(int n, int k)
    {
        if ((n & k) != k)
        {
            return -1;
        }
        int ans = n ^ k;
        int count = 0;
        while (ans != 0)
        {
            if (ans & 1)
            {
                count++;
            }
            ans >>= 1;
        }
        return count;
    }
};