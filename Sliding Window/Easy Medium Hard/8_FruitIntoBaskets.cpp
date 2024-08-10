// https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

// Fruit Into Baskets-->BRUTE FORCE

int totalFruits(vector<int> &arr)
{
    set<int> st;
    int maxlength = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            st.insert(arr[j]);
            if (st.size() > 2)
            {
                break;
            }
            if (st.size() <= 2)
            {
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }
    return maxlength;
}

// Fruit Into Baskets-->BETTER
int totalFruits(vector<int> &arr)
{
    map<int, int> mpp;
    int l = 0, r = 0, maxlength = 0;
    while (r < arr.size())
    {
        mpp[arr[r]]++;
        if (mpp.size() > 2)
        {
            while (mpp.size() > 2)
            {
                mpp[arr[l]]--;
                if (mpp[arr[l]] == 0)
                    mpp.erase(arr[l]);
                l++;
            }
        }
        if (mpp.size() <= 2)
        {
            maxlength = max(maxlength, r - l + 1);
        }
        r++;
    }
    return maxlength;
}

// Fruit Into Baskets-->OPTIMAL
int totalFruits(vector<int> &arr)
{
    map<int, int> mpp;
    int l = 0, r = 0, maxlength = 0;
    while (r < arr.size())
    {
        mpp[arr[r]]++;
        if (mpp.size() > 2)
        {
            if (mpp.size() > 2)
            {
                mpp[arr[l]]--;
                if (mpp[arr[l]] == 0)
                    mpp.erase(arr[l]);
                l++;
            }
        }
        if (mpp.size() <= 2)
        {
            maxlength = max(maxlength, r - l + 1);
        }
        r++;
    }
    return maxlength;
}