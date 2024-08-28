#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int maximumSwap(int num)
{
    vector<int> v;
    while (num > 0)
    {

        int digit = num % 10;
        v.push_back(digit);
        num = num / 10;
    }
    sort(v.begin(), v.end());
    int n = v.size();
    int ans = 0;
    for (int i = n; i >= 0; i--)
    {
        ans = ans * 10 + v[i];
    }
    return ans;
}
int main()
{
    int num;
    cout << "enter a number : " << endl;
    cin >> num;
    int ans = maximumSwap(num);
    cout << ans;
    return 0;
}