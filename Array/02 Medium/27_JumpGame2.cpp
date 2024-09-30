// https://leetcode.com/problems/jump-game-ii/description/
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int reachable = 0;
        int count = 0;
        int lastJump = 0;
        for (int i = 0; i < n - 1; i++)
        {
            reachable = max(reachable, i + nums[i]);
            if (i == lastJump)
            {
                count++;
                lastJump = reachable;
            }
        }
        return count;
    }
};
