// https://leetcode.com/problems/longest-palindromic-substring/description/
// Longest Palindromic Substring --> brute force
class Solution
{
public:
    bool checkPal(string s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        int start = 0, res = 1, n = s.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (checkPal(s, i, j) && (j - i + 1) > res)
                {
                    start = i;
                    res = j - i + 1;
                }
            }
        }
        return s.substr(start, res);
    }
};

//// Longest Palindromic Substring --> optamised
class Solution
{
public:
    string expand(string s, int l, int r)
    {
        while (l >= 0 && r < s.length() && s[l] == s[r])
        {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    string longestPalindrome(string s)
    {
        int maxLength = 0;
        string maxPali = "";
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            string oddWord = expand(s, i, i);
            if (oddWord.length() > maxLength)
            {
                maxLength = oddWord.length();
                maxPali = oddWord;
            }
            string evenWord = expand(s, i, i + 1);
            if (evenWord.length() > maxLength)
            {
                maxLength = evenWord.length();
                maxPali = evenWord;
            }
        }
        return maxPali;
    }
};