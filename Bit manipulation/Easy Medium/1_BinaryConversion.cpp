#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string binaryConversion(int x)
{
    string res = "";
    while (x != 0)
    {
        int rem = x % 2;
        x = x / 2;
        res = to_string(rem) + res;
    }
    return res;
}
int main()
{
    int x;
    cout << "enter a decimal number to conver into binary" << endl;
    cin >> x;
    string ans = binaryConversion(x);
    // ans.reserve();
    cout << "binary converstion of " << x << " is " << endl;
    cout << ans;
    return 0;
}

// https://leetcode.com/problems/number-of-1-bits/description/
class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n != 1)
        {
            if (n % 2 == 1)
                count++;
            n = n / 2;
        }
        return count + 1;
    }
};