// https://leetcode.com/problems/intersection-of-two-arrays/description/
// Intersection of Two Arrays-->BRUTE FORCE
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        set<int> st;
        vector<int> inter;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            {
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        for (auto it : st)
        {
            inter.push_back(it);
        }
        return inter;
    }
};
// tc : O(min(n, m) * log(min(n, m)))
// sc : o(n+m)

/// Intersection of Two Arrays-->BRUTE FORCE
