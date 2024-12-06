// https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1
class Solution
{
public:
    void nearlySorted(vector<int> &arr, int k)
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int> sortedArray;
        int n = arr.size();
        for (int i = 0; i < k + 1; i++)
        {
            minHeap.push(arr[i]);
        }
        for (int i = k + 1; i < n; i++)
        {
            sortedArray.push_back(minHeap.top());
            minHeap.pop();
            minHeap.push(arr[i]);
        }
        while (!minHeap.empty())
        {
            sortedArray.push_back(minHeap.top());
            minHeap.pop();
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = sortedArray[i];
        }
    }
};