// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
// Longest K(exactly) unique characters substring -->BRUTE FORCE
int longestKSubstr(string s, int k)
{
    int maxlength = -1;
    set<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.clear();
        for (int j = i; j < s.length(); j++)
        {
            st.insert(s[j]);
            if (st.size() > k)
                break;
            if (st.size() == k)
            {
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }
    return maxlength;
}

// Longest K unique characters substring -->BETTER
int longestKSubstr(string s, int k)
{
    int maxlength = -1;
    map<char, int> mpp;
    int l = 0, r = 0;
    while (r < s.length())
    {
        mpp[s[r]]++;
        while (mpp.size() > k)
        {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0)
                mpp.erase(s[l]);
            l++;
        }
        if (mpp.size() == k)
        {
            maxlength = max(maxlength, r - l + 1);
        }
        r++;
    }
    return maxlength;
}

// Longest K unique characters substring -->OPTIMAL
int longestKSubstr(string s, int k)
{
    int maxlength = -1;
    map<char, int> mpp;
    int l = 0, r = 0;
    while (r < s.length())
    {
        mpp[s[r]]++;
        if (mpp.size() > k)
        {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0)
                mpp.erase(s[l]);
            l++;
        }
        if (mpp.size() == k)
        {
            maxlength = max(maxlength, r - l + 1);
        }
        r++;
    }
    return maxlength;
}