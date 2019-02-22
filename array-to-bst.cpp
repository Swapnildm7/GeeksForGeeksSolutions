#include "bits/stdc++.h"
using namespace std;

struct tree{
    int data;
    tree* left;
    tree *right;
};

tree * NewNode(int data){
    tree *root=new tree;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}

tree* arraytobst(int arr[],int start, int end){
    if(start>end)return NULL;
    int mid=(start+end)/2;
    struct tree* root=NewNode(arr[mid]);
    root->left=arraytobst(arr,start,mid-1);
    root->right=arraytobst(arr,mid+1,end);
    return root;
}
 

void preorder(tree *root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i,t,arr[1000000],n;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)cin>>arr[i];
    
        tree* root=arraytobst(arr,0,n-1);
        preorder(root);
    
        cout<<"\n";
    }
return 0;
}