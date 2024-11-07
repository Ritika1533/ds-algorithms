// https://leetcode.com/problems/minimum-time-difference/description/
class Solution
{
public:
    int convertTimeToMinutes(const string &time)
    {
        int hour = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        return hour * 60 + minutes;
    }
    int findMinDifference(vector<string> &timePoints)
    {
        int n = timePoints.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int minutes = convertTimeToMinutes(timePoints[i]);
            v.push_back(minutes);
        }
        sort(v.begin(), v.end());
        int minDifference = 1440;
        for (int i = 1; i < n; i++)
        {
            minDifference = min(minDifference, v[i] - v[i - 1]);
        }
        minDifference = min(minDifference, 1440 - v.back() + v.front());
        return minDifference;
    }
};