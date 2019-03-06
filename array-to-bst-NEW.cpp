#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

struct tnode{
    ll data;
    struct tnode *left;
    struct tnode *right;
};

struct tnode* construct(ll arr[],ll start,ll end){
    if(start>end)return NULL;
    ll mid=(start+end)/2;
    struct tnode* root=(struct tnode *)malloc(sizeof(root));
    root->data=arr[mid];
    root->left=construct(arr,start,mid-1);
    root->right=construct(arr,mid+1,end);
}

void pre1(struct tnode * root)
{
    if(root==NULL)return;
    cout<<root->data<<" ";
    pre1(root->left);
    pre1(root->right);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,n,arr[100000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        struct tnode* root=(struct tnode *)malloc(sizeof(root));
        root=construct(arr,0,n-1);
        pre1(root);
        cout<<"\n";
    }
}