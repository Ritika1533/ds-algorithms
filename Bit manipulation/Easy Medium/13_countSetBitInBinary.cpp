// https://www.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
// You are given a number n. Find the total count of set bits for all numbers from 1 to n(both inclusive).
// BRUTE FORCE

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
    int countSetBits(int n)
    {
        int count = 0;
        for (int i = 0; i <= n; i++)
        {
            string ans = binaryConversion(i);
            for (int j = 0; j < ans.length(); j++)
            {
                char ch = ans[j];
                if (ch == '1')
                    count++;
            }
        }
        return count;
    }
};
// OPTIMAL for 1 integer
int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}