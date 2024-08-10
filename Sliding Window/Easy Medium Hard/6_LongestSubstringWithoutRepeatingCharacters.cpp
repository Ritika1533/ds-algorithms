// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

// Longest Substring Without Repeating Characters-->BRUTE FORCE
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxlength = 0, length = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int hash[256] = {0};
            for (int j = i; j < s.length(); j++)
            {
                if (hash[s[j]] == 1)
                    break;
                length = j - i + 1;
                maxlength = max(length, maxlength);
                hash[s[j]] = 1;
            }
        }
        return maxlength;
    }
};