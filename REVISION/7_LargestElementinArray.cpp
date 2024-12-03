#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findLargest(vector<int> &arr)
{
    int n = arr.size();
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
    }
    return maxi;
}
// o(n)
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// o(n)
int main()
{
    vector<int> v = {1, 8, 7, 56, -90};
    printArray(v);
    int Largest = findLargest(v);
    cout << Largest;
}