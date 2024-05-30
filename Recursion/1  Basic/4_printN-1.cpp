#include <iostream>
using namespace std;
void printNos(int N)
{
    if (N <= 0)
    {
        return;
    }
    cout << N << " ";
    printNos(N - 1);
}
int main()
{
    int n;
    cout << "enter the value of n : " << endl;
    cin >> n;
    printNos(n);
}