// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/
class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        int n = target.size();
        int m = arr.size();
        if (m != n)
            return false;
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < m; i++)
        {
            if (target[i] != arr[i])
                return false;
        }
        return true;
    }
};