// https://leetcode.com/problems/add-binary/
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int alength = a.length() - 1;
        int blength = b.length() - 1;
        int carry = 0;
        string ans = "";
        int i = alength;
        while (alength >= 0 || blength >= 0 || carry != 0)
        {
            int x = 0;
            if (alength >= 0 && a[alength] == '1')
            {
                x = 1;
            }
            int y = 0;
            if (blength >= 0 && b[blength] == '1')
            {
                y = 1;
            }
            ans = to_string((x + y + carry) % 2) + ans;
            carry = (x + y + carry) / 2;
            alength--;
            blength--;
        }
        return ans;
    }
};