#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
vector<int> findUnion(vector<int> a, vector<int> b)
{
    set<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }
    vector<int> ans;
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {2, 2, 3, 4, 5};
    vector<int> b = {1, 1, 2, 3, 4};
    printArray(a);
    printArray(b);
    vector<int> ans = findUnion(a, b);
    printArray(ans);
}
// 2 2 3 4 5
// 1 1 2 3 4
// 1 2 3 4 5