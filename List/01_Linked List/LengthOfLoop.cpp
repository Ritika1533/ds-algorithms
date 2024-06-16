// https://www.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop
/*
int countNodesinLoop(struct Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int count=1;
            fast=fast->next;
            while(slow!=fast){
                fast=fast->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}
 */