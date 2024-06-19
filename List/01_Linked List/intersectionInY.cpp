// https://leetcode.com/problems/intersection-of-two-linked-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// brute force tc : o(m+n) sc:O(n)0
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        map<ListNode *, int> mpp;
        ListNode *temp = headA;
        while (temp != NULL)
        {
            mpp[temp] = 1;
            temp = temp->next;
        }
        temp = headB;
        while (temp != NULL)
        {
            if (mpp.find(temp) != mpp.end())
            {
                return temp;
            }
            else
            {
                temp = temp->next;
            }
        }
        return NULL;
    }
};

// OPTAMISED CODE tc:o(n1+n2) sp: o(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * }
 */
class Solution
{
    ListNode *collisionPoint(ListNode *t1, ListNode *t2, int d)
    {
        while (d)
        {
            d--;
            t2 = t2->next;
        }
        while (t1 != t2)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t2;
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp = headA;
        int n1 = 0, n2 = 0;
        while (temp != NULL)
        {
            n1++;
            temp = temp->next;
        }
        temp = headB;
        while (temp != NULL)
        {
            n2++;
            temp = temp->next;
        }
        if (n1 < n2)
        {
            return collisionPoint(headA, headB, n2 - n1);
        }
        else
        {
            return collisionPoint(headB, headA, n1 - n2);
        }
        return NULL;
    }
};