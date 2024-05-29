#include <iostream>
#include <string>
using namespace std;
bool call(string str, int i, int j)
{
    if (i >= j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return call(str, i + 1, j - 1);
    }
}
bool isPalindrome(string s)
{
    string newStr;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            newStr.push_back(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            newStr.push_back(s[i] + ('a' - 'A'));
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            newStr.push_back(s[i]);
        }
    }
    return call(newStr, 0, newStr.length() - 1);
}
int main()
{
    string s;
    cout << "enter a string :" << endl;
    getline(cin, s);
    bool ans = isPalindrome(s);
    cout << ans;
}