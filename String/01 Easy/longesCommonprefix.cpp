// https://leetcode.com/problems/longest-common-prefix/description/
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }
        sort(strs.begin(), strs.end());
        string str3 = "";
        int n = strs.size();
        string str1 = strs[0];
        string str2 = strs[n - 1];
        int i = 0;
        while (i < str1.length() && str1[i] == str2[i])
        {
            str3.push_back(str1[i]);
            i++;
        }
        return str3;
    }
};