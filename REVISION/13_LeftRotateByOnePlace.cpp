#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leftRotateByOnePlace(vector<int> &arr, int k)
{
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {-1, -100, 3, 99};
    int k = 1;
    printArray(v);
    leftRotateByOnePlace(v, k);
    printArray(v);
}
//-1 -100 3 99
// 99 -1 -100 3