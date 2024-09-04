// https://leetcode.com/problems/power-of-two/submissions/1378345658/
// check power of two -->brute force
class Solution
{
public:
    string binaryConversion(int x)
    {
        string res = "";
        while (x != 0)
        {
            int rem = x % 2;
            x = x / 2;
            res = to_string(rem) + res;
        }
        return res;
    }
    bool isPowerOfTwo(int n)
    {
        if (n < 0)
            return false;
        string ans = binaryConversion(n);
        reverse(ans.begin(), ans.end());
        int count = 0;
        for (int i = 0; i < ans.length(); i++)
        {
            char ch = ans[i];
            if (ch == '1')
                count++;
        }
        if (count == 1)
            return true;
        else
            return false;
    }
};

// check power of two --> optimal
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        return ((n & (n - 1)) == 0);
    }
};