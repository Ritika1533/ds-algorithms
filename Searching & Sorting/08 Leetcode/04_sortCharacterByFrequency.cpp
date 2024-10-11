// https://leetcode.com/problems/sort-characters-by-frequency/solutions/5899467/codeease/
class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        vector<pair<int, char>> v;
        string ans = "";
        for (auto ch : s)
        {
            mp[ch]++;
        }
        for (auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        for (auto &p : v)
        {
            ans.append(p.first, p.second);
        }
        return ans;
    }
};