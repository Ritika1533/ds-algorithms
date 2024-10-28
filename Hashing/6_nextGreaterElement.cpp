// https://leetcode.com/problems/next-greater-element-i/
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums2.size(); i++)
        {
            mpp.insert({nums2[i], i});
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            int j = mpp[nums1[i]];
            bool found = false;
            for (int k = j + 1; k < nums2.size(); k++)
            {
                if (nums2[k] > nums1[i])
                {
                    v.push_back(nums2[k]);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                v.push_back(-1);
            }
        }

        return v;
    }
};