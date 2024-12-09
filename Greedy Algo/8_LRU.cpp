// https://www.geeksforgeeks.org/problems/page-faults-in-lru5603/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=page-faults-in-lru
int pageFaults(int n, int c, int pages[])
{
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), pages[i]);
        if (it == v.end())
        {
            if (v.size() == c)
            {
                v.erase(v.begin());
            }
            v.push_back(pages[i]);
            count++;
        }
        else
        {
            v.erase(it);
            v.push_back(pages[i]);
        }
    }
    return count;
}