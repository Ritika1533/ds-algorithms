//
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> v = heights;
        sort(v.begin(), v.end());
        int n = heights.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != heights[i])
                count++;
        }
        return count;
    }
};