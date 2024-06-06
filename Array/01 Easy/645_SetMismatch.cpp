//https://leetcode.com/problems/set-mismatch/description/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n, false);
        vector<int> ans(2);
        int sum = 0;
        int duplicate = -1;

        for (int i = 0; i < n; ++i) {
            if (seen[nums[i] - 1]) {
                duplicate = nums[i];
            } else {
                seen[nums[i] - 1] = true;
                sum += nums[i];
            }
        }

        int missing = n * (n + 1) / 2 - sum;
        ans[0] = duplicate;
        ans[1] = missing;

        return ans;
    }
};
