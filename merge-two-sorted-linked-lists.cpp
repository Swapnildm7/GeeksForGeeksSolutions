/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{   
    Node *curr=NULL;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    
    if(head1->data<=head2->data){
        curr=head1;
        curr->next=sortedMerge(head1->next,head2);
    }    
    else{
        curr=head2;
        curr->next=sortedMerge(head1,head2->next);
    }
    return curr;
    // Your Code Here
}
