#include "bits/stdc++.h"
using namespace std;

int dp[100];

int func(int n){
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n<=6){
    dp[n]=n;
    return n;
    }
    int maxi=0,curr,b;
    for(b=1;b<=n-3;b++){
        curr=(n-b-1)*func(b);
        if(maxi<curr)
            maxi=curr;
    }
    dp[n]=maxi;
    return maxi;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	memset(dp,-1,sizeof(dp));
	while(t--){
	    cin>>n;
	    if(n>75)
	        cout<<"-1\n";
	   else
	    cout<<func(n)<<"\n";
	}
	return 0;
}