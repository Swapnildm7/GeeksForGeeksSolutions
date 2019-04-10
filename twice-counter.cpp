/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list node 
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,i;
	string s;
	
	cin>>t;
	while(t--){
	    map<string,int> mm;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        mm[s]+=1;
	    }
	    int c=0;
	    for(map<string,int> ::iterator it=mm.begin();it!=mm.end();it++){
	        if(it->second==2){
	        c++;
	    }
	}
	cout<<c<<"\n";
	}
	return 0;
}}