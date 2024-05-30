#include <iostream>
using namespace std;
void printNumber(int n, string *arr)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    printNumber(n, arr);
    cout << arr[digit] << " ";
}
int main()
{
    int num;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "enter a number: " << endl;
    cin >> num;
    printNumber(num, arr);
}
/*enter a number:
4521
four five two one*/