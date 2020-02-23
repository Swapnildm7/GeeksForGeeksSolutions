struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    if(head==NULL || head->next==NULL)
    return head;
    
    int temp;Node *curr=head;
    while(curr && curr->next){
        temp=curr->data;
        curr->data=curr->next->data;
        curr->next->data=temp;
        curr=curr->next->next;
    }
    return head;
}