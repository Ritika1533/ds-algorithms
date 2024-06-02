/* https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/ */
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string str = "";
        for (auto word : words)
        {
            str = str + word[0];
        }
        if (str == s)
        {
            return true;
        }
        return false;
    }
};