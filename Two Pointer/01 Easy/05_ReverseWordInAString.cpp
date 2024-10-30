// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.size();
        int i = 0, j = 0, k = 0;
        while (j <= n)
        {
            if (j == n || s[j] == ' ')
            {
                int k = j - 1;
                while (i < k)
                {
                    swap(s[i], s[k]);
                    i++;
                    k--;
                }
                i = j + 1;
            }
            j++;
        }
        return s;
    }
};