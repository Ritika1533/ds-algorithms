#include <iostream>
using namespace std;
int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    return n * power(n, m - 1);
}
int main()
{
    int n, m;
    cout << "enter a number : " << endl;
    ;
    cin >> n >> m;
    int ans = power(n, m);
    cout << ans;
}
/*enter a number :
55
2*/