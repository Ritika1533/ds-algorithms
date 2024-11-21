// https://leetcode.com/problems/kth-missing-positive-number/
//  BRUTE
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > k)
            {
                break;
            }
            else
            {
                k++;
            }
        }
        return k;
    }
};

// OPTAMISED
