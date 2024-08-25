//
class Solution
{
public:
    string reverseWords(string s)
    {
        int i = 0;
        string ans = "";
        while (i < s.size())
        {
            while (i < s.size() && s[i] == ' ')
            {
                i++;
            }
            int j = i;
            while (j < s.size() && s[j] != ' ')
            {
                j++;
            }
            if (i < j)
            {
                if (ans.empty())
                {
                    ans = s.substr(i, j - i);
                }
                else
                {
                    ans = s.substr(i, j - i) + " " + ans;
                }
            }
            i = j;
        }
        return ans;
    }
};