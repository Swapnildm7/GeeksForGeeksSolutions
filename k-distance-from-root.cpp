/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
// function should print the nodes at k distance from root
void printKdistance(Node *root, int k)
{
  queue<pair<Node*,int>> q;
   q.push(make_pair(root,0));
   Node *temp;
   int k1;
    while(!q.empty()){
        temp=q.front().first;
        k1=q.front().second;
        if(k1==k)
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
            q.push(make_pair(temp->left,k1+1));
        if(temp->right!=NULL)
            q.push(make_pair(temp->right,k1+1));
    }
}