#include <iostream>
using namespace std;
int evenlyDivides(int N)
{
    int temp = N;
    int count = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        temp = temp / 10;
        if (digit != 0 && N % digit == 0)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    int ans = evenlyDivides(n);
    cout << ans;
}
/*enter a number :
55
2*/