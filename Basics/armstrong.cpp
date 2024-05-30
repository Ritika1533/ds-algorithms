#include <iostream>
using namespace std;
bool checkArmstrong(int n)
{
    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        int cube = digit * digit * digit;
        ans = ans + cube;
        temp = temp / 10;
    }
    return ans == n;
}
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    bool ans = checkArmstrong(n);
    cout << ans;
}
