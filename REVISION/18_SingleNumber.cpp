#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num ^ nums[i];
    }
    return num;
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
    vector<int> a = {4, 1, 2, 1, 2};
    printArray(a);
    int count = singleNumber(a);
    cout << count << endl;
}
// 4 1 2 1 2
// 4
