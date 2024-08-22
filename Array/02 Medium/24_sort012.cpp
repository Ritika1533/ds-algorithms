// https://leetcode.com/problems/sort-colors/
// sort 0,1,2-->BRUTE FORCE
// sort(nums.begin(),nums.end());
// sort 0,1,2-->BETTER
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                c0++;
            }
            else if (nums[i] == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        for (int i = 0; i < c0; i++)
            nums[i] = 0;
        for (int i = c0; i < c0 + c1; i++)
            nums[i] = 1;
        for (int i = c0 + c1; i < n; i++)
            nums[i] = 2;
    }
};

// sort 0,1,2-->OPTIMAL  DUTCH NATIONAL FLAG ALGORITHM
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};