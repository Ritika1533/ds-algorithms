#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    string s;
    cout << "enter a string : " << endl;
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    char ch;
    cout << "enter the alphabet for which you want the count : " << endl;
    cin >> ch;
    cout << hash[ch - 'a'];
}