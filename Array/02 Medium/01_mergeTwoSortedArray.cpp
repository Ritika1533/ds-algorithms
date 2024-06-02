#include <iostream>
using namespace std;
void mergeTwoSortedArray(int *arr1, int *arr2, int *arr3, int size1, int size2)
{
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    while (index1 < size1 && index2 < size2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr3[index3++] = arr1[index1++];
        }
        else
        {
            arr3[index3++] = arr2[index2++];
        }
    }
    // o(min(size1,size2))
    while (index1 < size1)
    {
        arr3[index3++] = arr1[index1++];
    }
    // o(size1-index1) : worst case =>index1=0
    // o(size1)
    while (index2 < size2)
    {
        arr3[index3++] = arr2[index2++];
    }
    // o(size2-index2) : worst case =>index2=0
    // o(size2)
}
// OVERALL TIME COMPLEXITY : O(size1+size2);
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size1, size2;
    int arr1[] = {68, 90, 92, 115, 167};
    int arr2[] = {1, 56, 89, 99, 245};
    size1 = sizeof(arr1) / sizeof(arr1[0]);
    size2 = sizeof(arr2) / sizeof(arr2[0]);
    printArray(arr1, size1);
    printArray(arr2, size2);
    int *arr3 = new int[size1 + size2];
    mergeTwoSortedArray(arr1, arr2, arr3, size1, size2);
    printArray(arr3, size1 + size2);
}
/*68 90 92 115 167
1 56 89 99 245
1 56 68 89 90 92 99 115 167 245*/