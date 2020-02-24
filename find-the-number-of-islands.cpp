// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
bool isSafe(int i,int j,int N,int M, vector<int> A[],vector<vector<bool>> &vis){
    return(i>=0 && i<N && j>=0 && j<M && A[i][j] && !vis[i][j]);
}

void dfs(int N, int M, vector<int> A[], vector<vector<bool>> &vis, int i, int j){
    vis[i][j]=true;
    if(isSafe(i+1,j,N,M,A,vis))dfs(N,M,A,vis,i+1,j);
    if(isSafe(i,j+1,N,M,A,vis))dfs(N,M,A,vis,i,j+1);
    if(isSafe(i-1,j,N,M,A,vis))dfs(N,M,A,vis,i-1,j);
    if(isSafe(i,j-1,N,M,A,vis))dfs(N,M,A,vis,i,j-1);
    if(isSafe(i-1,j-1,N,M,A,vis))dfs(N,M,A,vis,i-1,j-1);
    if(isSafe(i-1,j+1,N,M,A,vis))dfs(N,M,A,vis,i-1,j+1);
    if(isSafe(i+1,j-1,N,M,A,vis))dfs(N,M,A,vis,i+1,j-1);
    if(isSafe(i+1,j+1,N,M,A,vis))dfs(N,M,A,vis,i+1,j+1);
}

int findIslands(vector<int> A[], int N, int M)
{
    int i,j,ans=0;
    vector<vector<bool>> vis(N,vector<bool>(M,false));
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
           if(A[i][j] && !vis[i][j]){
               ans++;
               dfs(N,M,A,vis,i,j);
           }
        }
    }
    return ans;
    
}


// { Driver Code Starts.

int main() {
    
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		vector<int> A[N];
		for(int i=0;i<N;i++){
		    vector<int> temp(M);
		    A[i] = temp;
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}  // } Driver Code Ends