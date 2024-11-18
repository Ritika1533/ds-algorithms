// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/solutions/6051446/codeease/
class Solution
{
public:
    int maxDepth(string s)
    {
        int maxDepth = 0;
        int currentDepth = 0;
        for (auto ch : s)
        {
            if (ch == '(')
            {
                currentDepth++;
                maxDepth = max(maxDepth, currentDepth);
            }
            else if (ch == ')')
            {
                currentDepth--;
            }
        }
        return maxDepth;
    }
};