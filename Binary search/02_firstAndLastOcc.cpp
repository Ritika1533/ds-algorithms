// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// brute force
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int firstOcc = -1, lastOcc = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                if (firstOcc == -1)
                    firstOcc = i;
                lastOcc = i;
            }
        }
        return {firstOcc, lastOcc};
    }
};
// binary search
class Solution
{
public:
    int firstOcc(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, fo = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                fo = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return fo;
    }
    int lastOcc(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, lo = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                lo = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return lo;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = firstOcc(nums, target);
        if (first == -1)
            return {-1, -1};
        int last = lastOcc(nums, target);
        return {first, last};
    }
};