/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{   
    Node *head1=head,*head2=head;
    stack<Node*> st;
    while(head1!=NULL){
        st.push(head1);
        head1=head1->next;
    }
    while(head2!=NULL){
        if(head2->data!=st.top()->data)
        return false;
        st.pop();
        head2=head2->next;
    }
    return true;
    //Your code here
}