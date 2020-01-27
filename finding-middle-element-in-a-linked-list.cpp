/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    Node *slow_ptr=head,*fast_ptr=head;
    while(slow_ptr && fast_ptr && fast_ptr->next){
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
    }
    return slow_ptr->data;
}
