// https://leetcode.com/problems/binary-search/submissions/1386084254/
// ITERATIVE
class Solution
{
public:
    int binarySearch(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int index = binarySearch(nums, target);
        return index;
    }
};

// RECURSION
class Solution
{
public:
    int bs(vector<int> &nums, int low, int high, int target)
    {
        if (low > high)
            return -1;
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return bs(nums, low, mid - 1, target);
        else
            return bs(nums, mid + 1, high, target);
    }
    int search(vector<int> &nums, int target)
    {
        return bs(nums, 0, nums.size() - 1, target);
    }
};