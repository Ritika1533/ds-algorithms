// MIN TO MAX
class Solution
{
public:
    void maxHeapify(vector<int> &arr, int size, int i)
    {
        int largest = i;
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        if (leftChild < size && arr[leftChild] > arr[largest])
        {
            largest = leftChild;
        }
        if (rightChild < size && arr[rightChild] > arr[largest])
        {
            largest = rightChild;
        }

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            maxHeapify(arr, size, largest);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int N)
    {
        for (int i = N / 2 - 1; i >= 0; i--)
        {
            maxHeapify(arr, N, i);
        }
    }
};