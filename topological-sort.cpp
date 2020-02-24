// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*   NOTE: You must return dynamically allocated array 
*/

void topsortUtil(int V,vector<int> adj[],stack<int> &st,bool vis[],int s){
    vis[s]=true;
    for(auto it=adj[s].begin();it!=adj[s].end();it++){
        if(!vis[*it]){
            topsortUtil(V,adj,st,vis,*it);
        }
    }
    st.push(s);
}

int* topoSort(int V, vector<int> adj[])
{
    // Your code here
    static int topans[50];
    bool vis[V];
    for(int i=0;i<V;i++)
        vis[i]=false;
    stack<int> st;
    for(int i=0;i<V;i++)a
    if(!vis[i])
    topsortUtil(V,adj,st,vis,i);
    int c=0;
    while(!st.empty()){
        topans[c++]=st.top();
        st.pop();
    }
    return topans;
}



// { Driver Code Starts.

/*  Function to check if elements returned by user 
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, int* res, vector<int> adj[]){
    bool flag =true;
    for(int i=0;i<V && flag;i++)
    {
        int n=adj[res[i]].size();
        for(auto j : adj[res[i]])
        {
            for(int k=i+1;k<V;k++)
            {
                if(res[k]==j )
                    n--;
            }
        }
        if(n!=0)
            flag =false;
    }
    if(flag==false)
        return 0;
    return 1;
}

// Driver Code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,E;
        cin>>E>>N;
        int u,v;
        
        vector<int> adj[N];
        
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }
    
        int *res = topoSort(N, adj);
        
        cout<<check(N, res, adj)<<endl;
       
    }
}
  // } Driver Code Ends