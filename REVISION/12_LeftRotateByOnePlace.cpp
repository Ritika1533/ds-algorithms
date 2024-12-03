#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leftRotateByKPlace(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
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
    int k = 2;
    printArray(v);
    leftRotateByKPlace(v, k);
    printArray(v);
}
// 1 2 3 4 5 6 7
// 4 5 6 7 1 2 3