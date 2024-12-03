#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findSecondLargest(vector<int> &arr)
{
    int largest = INT_MIN;
    int sLargest = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
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
    vector<int> v = {1, 4, 9, 6, -90};
    printArray(v);
    int sLargest = findSecondLargest(v);
    cout << sLargest;
}