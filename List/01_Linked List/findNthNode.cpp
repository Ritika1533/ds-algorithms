class Solution
{
    ListNode *findNthNode(ListNode *head, int n)
    {
        ListNode *temp = head;
        int count = 1;
        while (temp != NULL)
        {
            if (count == n)
                break;
            count++;
            temp = temp->next;
        }
        return temp;
    }
};