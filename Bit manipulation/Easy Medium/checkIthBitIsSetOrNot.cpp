// https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
// check if ith bit is set or not
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
    bool checkKthBit(int n, int k)
    {
        string ans = "";
        ans = binaryConversion(n);
        reverse(ans.begin(), ans.end());
        if (k >= ans.length())
            return false;
        char ch = ans[k];
        return ch == '1';
    }
};

// optimal-->left shift operator
class Solution
{
public:
    bool checkKthBit(int n, int k)
    {
        if ((n & (1 << k)) != 0)
            return true;
        return false;
    }
};
// optimal-->right shift operator
class Solution
{
public:
    bool checkKthBit(int n, int k)
    {
        if (((n >> k) & 1) != 0)
            return true;
        return false;
    }
};