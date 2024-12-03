#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkSortedRotated(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
            count++;
    }
    if (arr[0] < arr[n - 1])
        count++;
    if (count > 1)
        return false;
    else
        return true;
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
    vector<int> v = {1, 2, 3};
    printArray(v);
    bool result = checkSortedRotated(v);
    cout << (result ? "sorted & rotated" : "not sorted and rotated") << endl;
}