// https://leetcode.com/problems/longest-repeating-character-replacement/description/
// Longest Repeating Character Replacement-->BRUTE FORCE
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int maxlength = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int maxfreq = 0;
            int hash[26] = {0};
            for (int j = i; j < s.length(); j++)
            {
                hash[s[j] - 'A']++;
                maxfreq = max(maxfreq, hash[s[j] - 'A']);
                int length = j - i + 1;
                int changes = length - maxfreq;
                if (changes > k)
                    break;
                if (changes <= k)
                {
                    maxlength = max(maxlength, j - i + 1);
                }
            }
        }
        return maxlength;
    }
};

// Longest Repeating Character Replacement-->BETTER

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int maxlength = 0, maxfreq = 0;
        int hash[26] = {0};
        int l = 0, r = 0;
        while (r < s.length())
        {
            hash[s[r] - 'A']++;
            maxfreq = max(maxfreq, hash[s[r] - 'A']);
            while ((r - l + 1) - maxfreq > k)
            {
                hash[s[l] - 'A']--;
                maxfreq = 0;
                for (int i = 0; i < 25; i++)
                {
                    maxfreq = max(maxfreq, hash[i]);
                }
                l++;
            }
            if ((r - l + 1) - maxfreq <= k)
            {
                maxlength = max(maxlength, r - l + 1);
            }
            r++;
        }
        return maxlength;
    }
};

// Longest Repeating Character Replacement-->OPTIMAL
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int maxlength = 0, maxfreq = 0;
        int hash[26] = {0};
        int l = 0;

        for (int r = 0; r < s.length(); r++)
        {
            hash[s[r] - 'A']++;
            maxfreq = max(maxfreq, hash[s[r] - 'A']);
            if ((r - l + 1) - maxfreq > k)
            {
                hash[s[l] - 'A']--;
                l++;
            }

            maxlength = max(maxlength, r - l + 1);
        }

        return maxlength;
    }
};