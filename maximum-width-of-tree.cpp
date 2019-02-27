/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Structure of a Binary Tree 
struct Node
{
    int data;
    Node* left, *right;
}; */
/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   // Your code here
   if(root==NULL)return 0;
   int ans=1,k1,arr[1000000];
   for(int i=0;i<1000000;i++)
   arr[i]=0;
   queue<pair<Node*,int>> q;
   q.push(make_pair(root,0));
   Node *temp;
    while(!q.empty()){
        temp=q.front().first;
        k1=q.front().second;
        arr[k1]+=1;
        q.pop();
        if(temp->left!=NULL)
            q.push(make_pair(temp->left,k1+1));
        if(temp->right!=NULL)
            q.push(make_pair(temp->right,k1+1));
    }
    ans=arr[0];
    for(int i=0;i<k1;i++){
        if(ans<arr[k1])ans=arr[k1];
    }
   return ans;
}
