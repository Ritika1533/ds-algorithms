/* https://leetcode.com/problems/count-asterisks/description/ */
#include <string>
using namespace std;
class Solution
{
public:
    int countAsterisks(string s)
    {
        int count = 0;
        int astricCount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|')
            {
                count++;
                continue;
            }
            if (count % 2 == 0 && s[i] == '*')
            {
                astricCount++;
            }
        }
        return astricCount;
    }
};