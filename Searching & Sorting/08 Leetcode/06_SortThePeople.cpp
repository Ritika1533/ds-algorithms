// https://leetcode.com/problems/sort-the-people/solutions/5935639/codeease/
class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        map<int, string> mpp;
        vector<string> v;
        for (int i = 0; i < names.size(); i++)
        {
            mpp.insert({heights[i], names[i]});
        }
        int index = 0;
        for (auto it = mpp.rbegin(); it != mpp.rend(); it++)
        {
            v.push_back(it->second);
        }
        return v;
    }
};