/*1838. Frequency of the Most Frequent Element
Solved
Medium
Topics
Companies
Hint
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.



Example 1:

Input: nums = [1,2,4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
4 has a frequency of 3.
Example 2:

Input: nums = [1,4,8,13], k = 5
Output: 2
Explanation: There are multiple optimal solutions:
- Increment the first element three times to make nums = [4,4,8,13]. 4 has a frequency of 2.
- Increment the second element four times to make nums = [1,8,8,13]. 8 has a frequency of 2.
- Increment the third element five times to make nums = [1,4,13,13]. 13 has a frequency of 2.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxFrequency(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int ans = 0, l = 0, r = 0;
    long windowSum = 0;
    while (r < nums.size())
    {
        windowSum += nums[r];
        while ((r - l + 1) * (long)nums[r] > windowSum + k)
        {
            windowSum -= nums[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    return ans;
}
