// https://leetcode.com/problems/happy-number/
class Solution
{
public:
    int numSquareSum(int n)
    {
        int num = 0;
        while (n != 0)
        {
            int digit = n % 10;
            num += digit * digit;
            n /= 10;
        }
        return num;
    }
    bool isHappy(int n)
    {
        set<int> st;
        while (1)
        {
            n = numSquareSum(n);
            if (n == 1)
                return true;
            if (st.find(n) != st.end())
                return false;
            st.insert(n);
        }
    }
};