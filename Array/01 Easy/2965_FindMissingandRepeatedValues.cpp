//   https://leetcode.com/problems/find-missing-and-repeated-values/description/
#include <iostream>
#in clude <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> v(2);
        unordered_map<int, int> mpp;
        int repeat = 0;
        for (auto row : grid)
        {
            for (auto ele : row)
            {
                mpp[ele]++;
                if (mpp[ele] > 1 && repeat == 0)
                {
                    repeat = ele;
                }
            }
        }
        int missing = -1;
        for (int i = 1; i <= n * n; ++i)
        {
            if (!mpp.count(i))
            {
                missing = i;
                break;
            }
        }
        v[0] = repeat;
        v[1] = missing;
        return v;
    }
};