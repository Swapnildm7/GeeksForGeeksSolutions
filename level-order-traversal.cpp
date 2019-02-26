/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* root)
{
  //Your code here
  queue<Node *> q;
  Node *temp;
  q.push(root);
  while(!q.empty()){
      temp=q.front();
      cout<<temp->data<<" ";
      if(temp->left!=NULL) q.push(temp->left);
      if(temp->right!=NULL) q.push(temp->right);
       q.pop();
  }
  //cout<<"\n";
}
