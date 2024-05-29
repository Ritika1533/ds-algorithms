#include <iostream>
using namespace std;
void printGfg(int N)
{
    if (N <= 0)
    {
        return;
    }
    cout << "GFG" << " ";
    printGfg(N - 1);
}
int main()
{
    int n;
    cout << "enter the value of n : " << endl;
    cin >> n;
    printGfg(n);
}