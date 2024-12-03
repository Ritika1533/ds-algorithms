#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void moveZeros(vector<int> &arr)
{
    int n = arr.size();
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    for (int i = index; i < n; i++)
    {
        arr[i] = 0;
    }
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
    vector<int> v = {0, 10, 5, 8, 0, 3, 9, 56, 0, 3, 12};
    printArray(v);
    moveZeros(v);
    printArray(v);
}
// 0 10 5 8 0 3 9 56 0 3 12
// 10 5 8 3 9 56 3 12 0 0 0