// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
// Number of Substrings Containing All Three Characters-->BRUTE FORCE
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        set<char> st;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            st.clear();
            for (int j = i; j < s.length(); j++)
            {
                st.insert(s[j]);
                if (st.size() == 3)
                {
                    count = count + s.length() - j;
                    break;
                }
            }
        }
        return count;
    }
};

// Number of Substrings Containing All Three Characters-->OPTIMAL
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int hash[3] = {0};
        int l = 0, r = 0;
        int count = 0;
        while (r < s.length())
        {
            hash[s[r] - 'a']++;
            while (hash[0] > 0 && hash[1] > 0 && hash[2] > 0)
            {
                count = count + (s.length() - r);
                hash[s[l] - 'a']--;
                l++;
            }
            r++;
        }
        return count;
    }
};
