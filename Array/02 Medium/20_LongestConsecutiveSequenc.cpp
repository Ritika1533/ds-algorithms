// https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// Longest consecutive subsequence-->BRUTE FORCE
int findLongestConseqSubseq(int arr[], int N)
{
    int maxCount = 0; // Initialize maxCount to store the length of the longest sequence

    for (int i = 0; i < N; i++)
    {
        int x = arr[i];
        int count = 1;

        for (int j = 0; j < N; j++)
        {
            if (arr[j] == x + 1)
            { // Check for the next consecutive element
                count++;
                x = x + 1;
            }
        }

        if (count > maxCount)
        {
            maxCount = count; // Update maxCount if the current count is larger
        }
    }

    return maxCount; // Return the length of the longest consecutive subsequence
}

// Longest consecutive subsequence-->OPTIMAL
int findLongestConseqSubseq(int arr[], int N)
{
    set<int> st;
    for (int i = 0; i < N; i++)
    {
        st.insert(arr[i]);
    }
    int longest = 0;
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int x = it;
            int count = 1;
            while (st.find(x + 1) != st.end())
            {
                count++;
                x = x + 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}