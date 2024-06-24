//  https://leetcode.com/problems/find-common-characters/description/
#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> common(26, INT_MAX);
        vector<string> ans;

        for (auto word : words)
        {
            vector<int> count(26, 0);
            for (auto c : word)
            {
                count[c - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                common[i] = min(common[i], count[i]);
            }
        }
        for (int i = 0; i < 26; i++)
        {
            int ch = common[i];
            while (ch--)
            {
                ans.push_back(string(1, 'a' + i));
            }
        }
        return ans;
    }
};