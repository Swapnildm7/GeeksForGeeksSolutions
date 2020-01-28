/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list
Node* addTwoLists(Node* first, Node* second) {
    // Code here
    if(first==NULL && second==NULL)
    return NULL;
    if(first==NULL && second!=NULL)
    return second;
    if(second==NULL && first!=NULL)
    return first;
    Node *dummy=new Node(0);
    Node *l1=first,*l2=second,*curr=dummy;
    int carry=0;
    while(l1!=NULL || l2!=NULL){
        int x=(l1==NULL)?0:l1->data;
        int y=(l2==NULL)?0:l2->data;
        int s=x+y+carry;
        Node *curr1= new Node(s%10);
        carry=s/10;
        curr->next=curr1;
        curr=curr->next;
        if(l1!=NULL)l1=l1->next;
        if(l2!=NULL)l2=l2->next;
    }
    if(carry){
        Node *curr1= new Node(carry);
        curr1->next=NULL;
        curr->next=curr1;
    }
    return dummy->next;
}