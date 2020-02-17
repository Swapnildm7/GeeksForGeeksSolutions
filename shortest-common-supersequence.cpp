#include "bits/stdc++.h"
using namespace std;

int LCSfunc(string A,string B){
    int m=A.size(),n=B.size();
    int dp[m+1][n+1]={0},i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(A[i-1]==B[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,m,i;
	string A,B;
	
	cin>>t;
	while(t--){
	    cin>>A>>B;
	    cout<<A.size()+B.size()-LCSfunc(A,B)<<endl;
	}
	return 0;
}