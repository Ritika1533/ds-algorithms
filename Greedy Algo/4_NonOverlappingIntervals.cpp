// https://leetcode.com/problems/non-overlapping-intervals/submissions/1472740130/
class Solution
{
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        if (intervals.empty())
            return 0;
        int count = 0;
        sort(intervals.begin(), intervals.end(), comp);
        int last = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][1] > last)
            {
                last = intervals[i][1];
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};