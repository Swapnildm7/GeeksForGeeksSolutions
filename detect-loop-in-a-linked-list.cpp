int detectloop(Node *head) {
    Node *slow_ptr=head,*fast_ptr=head;
    while(slow_ptr && fast_ptr && fast_ptr->next){
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
        if(slow_ptr==fast_ptr)
            return true;
    }
    return false;
    // your code here
    
}