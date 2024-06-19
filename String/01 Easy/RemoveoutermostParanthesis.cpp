// https://leetcode.com/problems/remove-outermost-parentheses/description/
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans = "";
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                if (st.size() > 0)
                {
                    ans = ans + ch;
                }
                st.push(ch);
            }
            else
            {
                st.pop();
                if (st.size() > 0)
                {
                    ans = ans + ch;
                }
            }
        }
        return ans;
    }
};