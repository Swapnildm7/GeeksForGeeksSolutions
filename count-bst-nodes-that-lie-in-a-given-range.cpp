/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of a BST node is as follows:
struct Node
{
    int data;
    Node *left;
    Node *right;
};
*/
int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here   
  if(root==NULL)return 0;
  if(root->data>=l && root->data<=h)return 1+getCountOfNode(root->left,l,h)+getCountOfNode(root->right,l,h);
  return getCountOfNode(root->left,l,h)+getCountOfNode(root->right,l,h);
}