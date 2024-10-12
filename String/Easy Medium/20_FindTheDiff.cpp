// https://leetcode.com/problems/find-the-difference/solutions/5846441/codeease/
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n = t.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (t[i] != s[i])
                return t[i];
        }
        return t[n - 1];
    }
};
