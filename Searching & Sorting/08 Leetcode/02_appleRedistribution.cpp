// https://leetcode.com/problems/apple-redistribution-into-boxes/solutions/5852423/codeease/
class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        int n = apple.size();
        int m = capacity.size();
        long long appleCount = 0;
        for (int i = 0; i < n; i++)
        {
            appleCount = appleCount + apple[i];
        }
        int l = 0, r = m - 1;
        long long sum = 0;
        int count = 0;
        sort(capacity.begin(), capacity.end());
        for (int i = m - 1; i >= 0; i--)
        {
            sum += capacity[i];
            count++;
            if (sum >= appleCount)
                return count;
        }
        return -1;
    }
};
