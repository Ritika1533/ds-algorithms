/* https://leetcode.com/problems/unique-morse-code-words/description/ */
#include <string>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        string arr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
                          ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
                          ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> s;
        int count = 0;
        for (auto word : words)
        {
            string str = "";
            for (auto element : word)
            {
                str = str + arr[element - 'a'];
            }
            s.insert(str);
        }
        for (auto number : s)
        {
            count++;
        }
        return count;
    }
};