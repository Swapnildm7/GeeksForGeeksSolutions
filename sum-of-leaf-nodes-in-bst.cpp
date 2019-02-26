/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */
/*You are required to complete below method */
int sumOfLeafNodes(Node *r ){
     if(r==NULL)return 0;
     else if(r->left==NULL && r->right==NULL)return r->data;
     return sumOfLeafNodes(r->left)+sumOfLeafNodes(r->right);
}