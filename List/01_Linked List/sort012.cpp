// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it
/*
//not optimal O(2n) 2 pass
    Node* segregate(Node *head) {
        int count0=0,count1=0,count2=0;
       Node* temp=head;
       while(temp!=NULL){
           if(temp->data==0) count0++;
           else if(temp->data==1) count1++;
           else if(temp->data==2)count2++;
           temp=temp->next;
       }
    temp=head;
    while(temp!=NULL){
        if(count0){
            temp->data=0;
            count0--;
        }
        else if(count1){
             temp->data=1;
            count1--;
        }else{
             temp->data=2;
             count2--;
        }
        temp=temp->next;
    }
    return head;
    }
 */

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s, and 2s.
    Node *segregate(Node *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        Node *temp = head;
        Node *zero = new Node(0);
        Node *zeropoint = zero;
        Node *one = new Node(1);
        Node *onepoint = one;
        Node *two = new Node(2);
        Node *twopoint = two;

        while (temp != nullptr)
        {
            if (temp->data == 0)
            {
                zero->next = temp;
                zero = temp;
            }
            else if (temp->data == 1)
            {
                one->next = temp;
                one = temp;
            }
            else if (temp->data == 2)
            {
                two->next = temp;
                two = temp;
            }
            temp = temp->next;
        }

        // Connect the lists
        zero->next = (onepoint->next != nullptr) ? onepoint->next : twopoint->next;
        one->next = twopoint->next;
        two->next = nullptr;

        Node *newhead = zeropoint->next;

        // Cleanup dummy nodes
        delete zeropoint;
        delete onepoint;
        delete twopoint;

        return newhead;
    }
};