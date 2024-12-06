// https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution
{
public:
    int findKthLargest(vector<int> &arr, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        // inserted k largest element
        for (int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }
        // remaning element
        for (int i = k; i < arr.size(); i++)
        {
            if (arr[i] > pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};