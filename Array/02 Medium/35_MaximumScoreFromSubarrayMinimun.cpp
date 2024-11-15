// https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays
class Solution
{
public:
    int smallestSumInSubarray(int i, int j, vector<int> arr)
    {
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int a = i; a <= j; a++)
        {
            if (arr[a] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[a];
            }
            else if (arr[a] < secondSmallest && arr[a] != smallest)
            {
                secondSmallest = arr[a];
            }
        }
        return (secondSmallest == INT_MAX) ? 0 : smallest + secondSmallest;
    }
    int pairWithMaxSum(vector<int> &arr)
    {
        int n = arr.size();
        int maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; i < n; j++)
            {
                int sum = smallestSumInSubarray(i, j, arr);
                maxSum = max(sum, maxSum);
            }
        }
        return maxSum;
    }
}