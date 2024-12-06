// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kth-smallest-element
int kthSmallest(vector<int> &arr, int k)
{
    priority_queue<int> pq;
    int n = arr.size();
    // I st step
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    // II nd step
    for (int i = k; i < n; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}