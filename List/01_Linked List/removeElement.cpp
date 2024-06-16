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
Node *deleteEle(Node *&head, int val)
{
    if (head == NULL)
        return head;
    if (head->node == val)
    {
        Node *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != nullptr)
    {
        if (temp->node == val)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
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
    deleteEle(head, 18);
    print(head);
}
// 9 12 15 18 21
// 9 12 15 21
