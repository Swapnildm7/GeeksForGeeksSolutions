long long func(Node *root,int sum){
    if(root==NULL)return 0;
    sum=sum*10+root->data;
    if(root->left==NULL && root->right==NULL)
    return sum;
    return func(root->left,sum)+func(root->right,sum);
}
long long treePathsSum(Node *root)
{
    return func(root,0);
}
