// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
#include <vector>
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int lsum = 0, rsum = 0, maxsum = 0;
        int n = cardPoints.size();
        for (int i = 0; i < k; i++)
        {
            lsum = lsum + cardPoints[i];
        }
        maxsum = lsum;
        int rlen = n - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rlen];
            rlen = rlen - 1;
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};