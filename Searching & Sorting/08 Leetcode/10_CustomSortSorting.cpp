// https://leetcode.com/problems/custom-sort-string/description/
class Solution
{
public:
    string customSortString(string order, string s)
    {
        unordered_map<char, int> orderSet;
        for (int i = 0; i < order.size(); i++)
        {
            orderSet[order[i]] = i;
        }
        string ans = "";
        for (auto c : order)
        {
            while (s.find(c) != string::npos)
            {
                int pos = s.find(c);
                s.erase(pos, 1);
                ans.push_back(c);
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};