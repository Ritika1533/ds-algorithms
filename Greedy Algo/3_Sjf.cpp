// https://www.geeksforgeeks.org/problems/shortest-job-first/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-job-first
class Solution
{
public:
    long long solve(vector<int> &bt)
    {
        sort(bt.begin(), bt.end());
        int n = bt.size();
        int t = 0, wt = 0;
        for (int i = 0; i < n; i++)
        {
            wt = wt + t;
            t = t + bt[i];
        }
        return wt / n;
    }
};