// https://leetcode.com/problems/keyboard-row/
class Solution
{
public:
    bool check(char c, string &row)
    {
        return (row.find(c) != string::npos);
    }
    vector<string> findWords(vector<string> &words)
    {
        int n = words.size();
        vector<string> mpp = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                bool found = true;
                for (int k = 0; k < words[i].size(); k++)
                {
                    if (!check(tolower(words[i][k]), mpp[j]))
                        found = false;
                }
                if (found)
                {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};