// https://leetcode.com/problems/reverse-prefix-of-word/description/
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int l = 0, r = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (ch == word[i])
            {
                r = i;
                break;
            }
        }
        while (l <= r)
        {
            swap(word[l], word[r]);
            l++, r--;
        }
        return word;
    }
};