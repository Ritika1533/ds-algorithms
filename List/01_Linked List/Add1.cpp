class Solution
{
    Node *reverseList(Node *head)
    {
        Node *temp = head;
        Node *prev = NULL;
        while (temp != NULL)
        {
            Node *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

public:
    Node *addOne(Node *head)
    {
        head = reverseList(head);
        Node *temp = head;
        int carry = 1;

        while (temp != NULL)
        {
            temp->data = temp->data + carry;
            if (temp->data < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp->data = 0;
                carry = 1;
            }
            temp = temp->next;
        }

        if (carry == 1)
        {
            Node *newNode = new Node(1); // Corrected this line
            head = reverseList(head);
            newNode->next = head;
            return newNode;
        }

        head = reverseList(head);
        return head;
    }
};
