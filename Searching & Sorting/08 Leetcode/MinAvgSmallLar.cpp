// https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/
class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        vector<double> avgVec;
        int n = nums.size();
        double avg = 0.0;
        sort(nums.begin(), nums.end());
        int l = 0, r = n - 1;
        while (l < r)
        {
            avg = (nums[l] + nums[r]) / 2.0;
            avgVec.push_back(avg);
            l++;
            r--;
        }
        auto minEle = min_element(avgVec.begin(), avgVec.end());
        return *minEle;
    }
};
