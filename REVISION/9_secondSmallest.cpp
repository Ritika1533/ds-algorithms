#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findSecondLargest(vector<int> &arr)
{
    int smallest = INT_MAX;
    int sSmallest = INT_MAX;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < sSmallest)
        {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
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
    vector<int> v = {1, 4, -9, -6, -90};
    printArray(v);
    int sLargest = findSecondLargest(v);
    cout << sLargest;
}