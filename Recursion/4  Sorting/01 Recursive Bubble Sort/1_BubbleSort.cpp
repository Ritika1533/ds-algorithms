#include <iostream>
#include <algorithm>
using namespace std;
void BubbleSort(int *arr, int n)
{
    if (n == 1)
        return;
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }
    if (count == 0)
        return;
    BubbleSort(arr, n - 1);
}
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
    int arr[] = {4, 8, 9, 2, 8, 4, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    BubbleSort(arr, size);
    printArray(arr, size);
}
/*4 8 9 2 8 4 55
2 4 4 8 8 9 55*/

/*
time complexity
                 Best: O(n)
                 Average: O(n^2)
                 Worst: O(n^2)

1. Difference between iterative and recursive bubble sort ? Ans.Recursive bubble sort runs on O(n)
auxiliary space complexity whereas iterative bubble sort runs on O(1) auxiliary space complexity.

2. Which is faster iterative or recursive bubble sort?
Ans.Based on the number of comparisons in each method,the recursive bubble sort is better
than the iterative bubble sort, but the time complexity for both the methods is same.

3. Which sorting method we should prefer more iterative or recursive bubble sort?
Ans.Both the methods complete the computation at the same time(according to time complexity analysis)
but iterative code takes less memory than recursive one, so we should prefer iterative bubble sort more
 than recursive bubble sort.*/