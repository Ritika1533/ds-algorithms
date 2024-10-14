// https://leetcode.com/problems/median-of-two-sorted-arrays/description/
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> newArr(nums1.size() + nums2.size());
        int i = 0;
        for (; i < nums1.size(); i++)
        {
            newArr[i] = nums1[i];
        }
        for (int j = 0; j < nums2.size(); j++)
        {
            newArr[i + j] = nums2[j];
        }
        sort(newArr.begin(), newArr.end());
        int x = newArr.size();
        if (x % 2 != 0)
        {
            return newArr[x / 2];
        }
        else
        {
            return (newArr[x / 2] + newArr[(x / 2) - 1]) / 2.0;
        }
        return -1;
    }
};