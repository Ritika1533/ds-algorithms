#include <iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "enter the value of n : " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "factorial of " << n << " is : " << ans;
    return 0;
}