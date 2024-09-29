// https://leetcode.com/problems/degree-of-an-array/
class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        map<int, int> freqCount;
        map<int, int> firstOcc;
        int n = nums.size();
        int degree = 0;
        int minLength = INT_MAX;
        int maxFreq = 0;
        for (int i = 0; i < n; i++)
        {
            if (firstOcc.find(nums[i]) == firstOcc.end())
            {
                firstOcc[nums[i]] = i;
            }
            freqCount[nums[i]]++;
            degree = freqCount[nums[i]];
            if (degree > maxFreq)
            {
                maxFreq = degree;
                minLength = i - firstOcc[nums[i]] + 1;
            }
            else if (degree == maxFreq)
            {
                minLength = min(minLength, i - firstOcc[nums[i]] + 1);
            }
        }
        return minLength;
    }
};