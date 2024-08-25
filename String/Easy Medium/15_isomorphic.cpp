//
// https://leetcode.com/problems/isomorphic-strings/submissions/1366976507/
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        map<char, char> sTt_mpp;
        map<char, char> tTs_mpp;
        for (int i = 0; i < s.size(); i++)
        {
            char sChar = s[i];
            char tChar = t[i];
            // S TO T
            if (sTt_mpp.find(sChar) == sTt_mpp.end())
            {
                sTt_mpp[sChar] = tChar;
            }
            else
            {
                if (sTt_mpp[sChar] != tChar)
                    return false;
            }
            // T TO S
            if (tTs_mpp.find(tChar) == tTs_mpp.end())
            {
                tTs_mpp[tChar] = sChar;
            }
            else
            {
                if (tTs_mpp[tChar] != sChar)
                    return false;
            }
        }
        return true;
    }
};