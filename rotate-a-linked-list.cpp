// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    if(k==0)
    return head;
    Node *kth=head,*k1th=head,*last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    int c=1;
    
    while(c<k && kth!=NULL){
        kth=kth->next;
        c++;
    }
    
    if(kth==NULL)
    return head;
    
    last->next=head;
    head=kth->next;
    kth->next=NULL;
    return head;
}
