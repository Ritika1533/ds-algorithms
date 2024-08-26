#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int pow(int m, int n)
{
    if (n == 0)
        return 1;
    return m * pow(m, n - 1);
}
int decimalConversion(string x)
{
    int n = x.size();
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int ind = 0;
        int bit = x[i] - '0'; // converting string to integer
        res = res + bit * pow(2, n - 1 - i);
    }
    return res;
}

int main()
{
    string x;
    cout << "enter a binary number to conver into decimal" << endl;
    cin >> x;
    int ans = decimalConversion(x);
    cout << "decimal converstion of X" << endl;
    cout << ans;
    return 0;
}