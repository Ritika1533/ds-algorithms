// https://leetcode.com/problems/reverse-string-ii/submissions/1419073529/
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        vector<string> v;
        int count = 0;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            count++;
            ans += s[i];
            if (count == 2 * k)
            {
                v.push_back(ans);
                ans = "";
                count = 0;
            }
        }
        if (!ans.empty())
            v.push_back(ans);
        string ansV = "";
        for (auto seg : v)
        {
            int n = seg.length();
            int l = 0, r = 0;
            if (n >= 2 * k)
                r = k - 1;
            else if (n >= k)
                r = k - 1;
            else
                r = n - 1;
            while (l <= r)
            {
                swap(seg[l], seg[r]);
                l++, r--;
            }
            ansV += seg;
        }

        return ansV;
    }
};