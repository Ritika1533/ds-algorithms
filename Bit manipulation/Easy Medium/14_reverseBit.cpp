// https://leetcode.com/problems/reverse-bits/solutions/5834445/codeease/
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        unsigned int reverse = 0;
        for (int i = 0; i < 32; i++)
        {
            reverse <<= 1;
            reverse = (reverse |= (n & 1));
            n >>= 1;
        }
        return reverse;
    }
};