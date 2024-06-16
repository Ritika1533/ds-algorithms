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
Node *deleteHead(Node *&head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = temp->next;
    // free(temp);
    delete temp;
    return head;
}
int main()
{
    Node *n1 = new Node(9);
    Node *head = n1;
    Node *tail = n1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 18);
    insertAtTail(tail, 21);
    print(head);
    deleteHead(head);
    print(head);
}
// 9 12 15 18 21
// 12 15 18 21