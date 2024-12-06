//
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
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // step 1 : merge two array
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            v.push_back(b[i]);
        }
        // setp 2 : heapify array
        int N = v.size();
        for (int i = N / 2 - 1; i >= 0; i--)
        {
            maxHeapify(v, N, i);
        }
        return v;
    }
};