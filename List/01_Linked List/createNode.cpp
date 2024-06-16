#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int node;
    Node *next;
    // constructor
    Node(int node, Node *next)
    {
        this->node = node;
        this->next = next;
    }
    Node(int node)
    {
        this->node = node;
        this->next = nullptr;
    }
};
int main()
{
    vector<int> arr = {3, 7, 5, 8};
    Node *n1 = new Node(arr[0]);
    cout << n1->node << endl;
    cout << n1->next << endl;
} /*3
 0x1d0150
 */