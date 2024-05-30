#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter a string : " << endl;
    cin >> s;
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    char ch;
    cout << "enter the alphabet for which you want the count : " << endl;
    cin >> ch;
    cout << hash[ch];
}
/*enter a string :
@@@@@@@@@@@@gvhBP{{[
enter the alphabet for which you want the count :
@
12*/