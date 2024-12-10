// https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
int findPlatform(vector<int> &arr, vector<int> &dep)
{
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    int maxCount = 0, count = 0;
    while (i < arr.size())
    {
        if (arr[i] <= dep[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        maxCount = max(count, maxCount);
    }
    return maxCount;
}
