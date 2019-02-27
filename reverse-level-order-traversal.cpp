/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root)
{
    //Your code here
    if(root==NULL)return;
    stack<Node *> st;
    queue<Node *> q;
    st.push(root);
    q.push(root);
    Node * temp;
    while(!q.empty()){
        //st.push(root);
        temp=q.front();
        q.pop();
        if(temp->right!=NULL) {q.push(temp->right);st.push(temp->right);}
        if(temp->left!=NULL) {q.push(temp->left);st.push(temp->left);}
    }
    while(!st.empty()){
        temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
    }
}