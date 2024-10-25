// https://leetcode.com/problems/longest-palindrome/description/
class Solution
{
public:
    int longestPalindrome(string s)
    {
        int n = s.size();
        int total = 0;
        unordered_map<char, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        bool hasOdd = false;
        for (auto it : mpp)
        {
            if (it.second % 2 == 0)
            {
                total = total + it.second;
            }
            else
            {
                total = total + it.second - 1;
                hasOdd = true;
            }
        }
        if (hasOdd)
            total += 1;
        return total;
    }
};