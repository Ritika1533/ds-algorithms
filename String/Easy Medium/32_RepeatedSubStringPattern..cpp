// https://leetcode.com/problems/repeated-substring-pattern/solutions/6059029/codeease/
class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.size();
        string sDouble = s + s;
        int pos = sDouble.find(s, 1);
        if (pos < n)
            return true;
        else
            return false;
    }
};