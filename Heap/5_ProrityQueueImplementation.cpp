#include <bits/stdc++.h>
using namespace std;

int H[10009];
int s = -1;

int parent(int i)
{
    return (i - 1) / 2;
}
int leftChild(int i)
{
    return (2 * i) + 1;
}

int rightChild(int i)
{
    return (2 * i) + 2;
}

void shiftUp(int i)
{
    while (i > 0 && H[parent(i)] < H[i])
    {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}
void shiftDown(int i)
{
    int maxIndex = i;

    int l = leftChild(i);
    if (l <= s && H[l] > H[maxIndex])
    {
        maxIndex = l;
    }

    int r = rightChild(i);
    if (r <= s && H[r] > H[maxIndex])
    {
        maxIndex = r;
    }

    if (i != maxIndex)
    {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p)
{
    s = s + 1;
    H[s] = p;
    shiftUp(s);
}

int extractMax()
{
    if (s < 0)
    {
        throw runtime_error("Heap is empty!");
    }

    int result = H[0];
    H[0] = H[s];
    s--;
    shiftDown(0);

    return result;
}

int main()
{
    Solution sol;
    insert(10);
    insert(20);
    insert(5);
    insert(30);

    cout << "Extracted max: " << extractMax() << endl; // 30
    cout << "Extracted max: " << extractMax() << endl; // 20

    return 0;
}