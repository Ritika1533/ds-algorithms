#include <iostream>
using namespace std;
class Node
{
public:
    int node;
    Node *next;
    // constructor
    Node(int node)
    {
        this->node = node;
        this->next = nullptr;
    }
};
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->node << " ";
        temp = temp->next;
    }
    cout << endl;
}
int findLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
bool checkPresent(Node *&head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->node == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    print(head);
    cout << findLength(head);
    cout << "\nis 13 present :" << checkPresent(head, 13);
}
// 10 12 15