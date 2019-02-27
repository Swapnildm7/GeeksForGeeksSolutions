/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// Method to find next right of given key k, it returns NULL if k is
// not present in tree or k is the rightmost node of its level
node* nextRight(node *root, int k)
{
// Your code goes here
    if(root==NULL) return root;
    //if(root->key==k)return root->right;
    queue<pair<node*,int>> q;
    q.push(make_pair(root,1));
    node *temp;
    int k1;
    while(!q.empty()){
        temp=q.front().first;
        k1=q.front().second;
        q.pop();
        if(temp->key==k && q.front().second==k1) return q.front().first;
        if(temp->left!=NULL)
            q.push(make_pair(temp->left,k1+1));
        if(temp->right!=NULL)q.push(make_pair(temp->right,k1+1));
    }
    return NULL;
}