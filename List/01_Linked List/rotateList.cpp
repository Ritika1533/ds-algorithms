// https://leetcode.com/problems/rotate-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *tail = head;
        int len = 1;
        while (tail->next != NULL)
        {
            len++;
            tail = tail->next;
        }
        if (k % len == 0)
            return head;
        k = k % len;
        tail->next = head;
        ListNode *newLastTail = findNthNode(head, len - k);
        head = newLastTail->next;
        newLastTail->next = NULL;
        return head;
    }
};