// leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// Remove Duplicates from Sorted Array-->BRUTE FORCE
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        int i = 0;
        for (auto it : st)
        {
            nums[i++] = it;
        }
        return st.size();
    }
};
// Remove Duplicates from Sorted Array-->OPTIMAL

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        vector<int> arr;
        arr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                arr.push_back(nums[i]);
            }
        }
        int index = 0;
        for (auto it : arr)
        {
            nums[index++] = it;
        }
        return arr.size();
    }
};