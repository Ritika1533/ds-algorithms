// https://leetcode.com/problems/count-primes/
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<int> prime(n + 1, 0);
        int s = prime.size();
        for (int i = 2; i < s; i++)
        {
            prime[i] = 1;
        }
        for (int i = 2; i < s; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = 2 * i; j < s; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        int count = 0;
        for (int k = 2; k < n; k++)
        {
            if (prime[k] == 1)
                count++;
        }
        return count;
    }
};

// optamised
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<int> prime(n + 1, 0);
        int s = prime.size();
        for (int i = 2; i < s; i++)
        {
            prime[i] = 1;
        }
        for (int i = 2; i * i < s; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = i * i; j < s; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        int count = 0;
        for (int k = 2; k < n; k++)
        {
            if (prime[k] == 1)
                count++;
        }
        return count;
    }
};