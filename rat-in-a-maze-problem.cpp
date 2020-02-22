// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define MAX 100
vector<string> printPath(int m[MAX][MAX], int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	
	int m[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}
	
	vector<string> res = printPath(m,n);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
	return 0;
}

// } Driver Code Ends
/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */

bool isSafe(int i,int j, int n,int m[MAX][MAX]){
    return (i>=0 && j>=0 && i<n && j<n && m[i][j] && m[i][j]!=100);
}

void func(vector<string> &ans,int m[MAX][MAX],int n,string curr,int i,int j){
    if(!isSafe(i,j,n,m))
        return;
    if(i==n-1 && j==n-1){
        ans.push_back(curr);
        return;
    }
    m[i][j]=100;
    func(ans,m,n,curr+"D",i+1,j);
    func(ans,m,n,curr+"R",i,j+1);
    func(ans,m,n,curr+"U",i-1,j);
    func(ans,m,n,curr+"L",i,j-1);
    m[i][j]=1;
}

vector<string> printPath(int m[MAX][MAX], int n)
{   
    vector<string> ans;
    string curr="";
    func(ans,m,n,curr,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}