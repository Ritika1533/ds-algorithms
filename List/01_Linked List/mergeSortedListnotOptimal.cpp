/*
void mergeList(Node* head1, Node* head2, Node*& mergedHead){
    int arr[200];
    int i=0;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        arr[i]=temp1->val;
        temp1=temp1->next;
        i++;
    }
    while(temp2!=NULL){
        arr[i]=temp2->val;
        temp2=temp2->next;
        i++
    }
    sort(arr,arr+i);
    mergedHead = nullptr;
    Node* current = nullptr;
    for (int j = 0; j < i; j++) {
        Node* newNode = new Node(arr[j]);
        if (mergedHead == nullptr) {
            mergedHead = newNode;
            current = mergedHead;
        } else {
            current->next = newNode;
            current = current->next;
        }
    }
}
*/