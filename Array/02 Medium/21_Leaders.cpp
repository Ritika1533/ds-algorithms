// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
// Array Leaders-->BRUTE FORCE
class Solution
{
public:
    vector<int> leaders(int n, int arr[])
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int flag = 1;
            int x = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (x < arr[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

// Array Leaders-->BETTER
class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int n, int arr[])
    {
        vector<int> ans;
        int maxi = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= maxi)
            {
                ans.push_back(arr[i]);
            }
            maxi = max(maxi, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};