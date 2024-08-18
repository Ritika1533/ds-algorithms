
// www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-array
// Union of Two Sorted Arrays-->Brute force
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        ans[index++] = it;
    }
    return ans;
}

// Union of Two Sorted Arrays-->optimal
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> unionVector;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionVector.empty() || unionVector.back() != arr1[i])
            {
                unionVector.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionVector.empty() || unionVector.back() != arr2[j])
            {
                unionVector.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (unionVector.empty() || unionVector.back() != arr1[i])
        {
            unionVector.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (unionVector.empty() || unionVector.back() != arr2[j])
        {
            unionVector.push_back(arr2[j]);
        }
        j++;
    }

    return unionVector;
}