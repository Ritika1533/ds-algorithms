#include <iostream>
using namespace std;
class Solution
{
public:
    bool isMaxHeap(int arr[], int n)
    {
        int i = 0;
        while (i < n)
        {
            int leftChild = 2 * i + 1;
            int rightChild = 2 * i + 2;
            if (leftChild < n && arr[i] < arr[leftChild])
            {
                return false;
            }
            else if (rightChild < n && arr[i] < arr[rightChild])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};
int main()
{
    int arr[] = {9, 15, 10, 7, 12, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution h1;
    bool ans = h1.isMaxHeap(arr, n);
    cout << ans;
}
// 90, 15, 10, 7, 12, 2;
// 1
// 9, 15, 10, 7, 12, 11
// 0