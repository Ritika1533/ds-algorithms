// https://leetcode.com/problems/powx-n/solutions/5966776/codeease/
class Solution
{
public:
    double calcPower(double x, int n)
    {
        if (n == 0)
            return 1;
        double half = calcPower(x, n / 2);
        if (n % 2 == 0)
        {
            return half * half;
        }
        else
        {
            return half * half * x;
        }
    }
    double myPow(double x, int n)
    {
        long long N = n;
        if (N < 0)
        {
            x = 1 / x;
            N = -N;
        }
        double ans = calcPower(x, N);
        return ans;
    }
};