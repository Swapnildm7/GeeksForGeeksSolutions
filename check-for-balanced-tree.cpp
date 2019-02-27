/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */
// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree

int height(Node *root){
    if(root==NULL)return 0;
    int lh,rh;
    lh=height(root->left);
    rh=height(root->right);
    return (lh>rh ? 1+lh : 1+rh);
}

bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)return true;
    return (isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->right)-height(root->left)))<=1);
    return false;
}
