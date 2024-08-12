// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
//  Largest Element in Array-->brute force
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr[n - 1];
    }
};

// Largest Element in Array-->OPTIMAL
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        return largest;
    }
};