// https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-number-of-substrings
// Count number of substrings-->brute force
class Solution
{
public:
    long long atMostKDistinct(string s, int k)
    {
        int l = 0, r = 0;
        map<char, int> mpp;
        long long count = 0;

        while (r < s.size())
        {
            mpp[s[r]]++;

            while (mpp.size() > k)
            {
                mpp[s[l]]--;
                if (mpp[s[l]] == 0)
                {
                    mpp.erase(s[l]);
                }
                l++;
            }

            count += (r - l + 1); // Count all valid substrings ending at r
            r++;
        }

        return count;
    }

    long long substrCount(string s, int k)
    {
        if (k == 0)
            return 0;
        return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
    }
};
