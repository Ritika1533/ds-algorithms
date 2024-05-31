#include <iostream>
using namespace std;
bool LinearSearch(int *arr, int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
        return true;
    return LinearSearch(arr + 1, n - 1, key);
}
int main()
{
    int arr[] = {1, 2, 3, 9, 6, 4, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "enter the element to be searched : " << endl;
    cin >> key;
    bool ans = LinearSearch(arr, n, key);
    if (ans == 1)
    {
        cout << "found the element" << endl;
    }
    else
    {
        cout << "not found the element" << endl;
    }
}
/*time Complexity
   best case : O(1)
   worst case O(n)
*/
