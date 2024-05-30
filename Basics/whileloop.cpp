#include <iostream>
using namespace std;

int main()
{
    int n, sumEven = 0, sumOdd = 0;
    cin >> n;
    while (n != 0)
    {
        int x = n % 10;

        if (x % 2 == 0)
        {
            sumEven += x;
        }
        else
        {
            sumOdd += x;
        }
        n = n / 10;
    }
    cout << sumEven << " " << sumOdd;
}
