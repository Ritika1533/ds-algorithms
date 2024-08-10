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

// Longest Substring Without Repeating Characters-->optimal

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0, maxlength = 0;
        int hash[256] = {0};
        while (r < s.size())
        {
            hash[s[r]]++;
            while (hash[s[r]] > 1)
            {
                hash[s[l]]--;
                l++;
            }
            maxlength = max(maxlength, r - l + 1);
            r++;
        }
        return maxlength;
    }
};