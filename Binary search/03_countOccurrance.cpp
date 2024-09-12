// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence
int firstOcc(int nums[], int n, int target)
{
    int low = 0, high = n - 1, fo = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            fo = mid;
            high = mid - 1;
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return fo;
}
int lastOcc(int nums[], int n, int target)
{
    int low = 0, high = n - 1, lo = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            lo = mid;
            low = mid + 1;
        }
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return lo;
}
int count(int arr[], int n, int x)
{
    int first = firstOcc(arr, n, x);
    if (first == -1)
        return 0;
    int last = lastOcc(arr, n, x);
    return last - first + 1;
}