#include <bits/stdc++.h>
using namespace std;

int func(int n,int m){
    if(n==0 || m==0)
    return 1;
    return func(n-1,m)+func(n,m-1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,m,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    cout<<func(n-1,m-1)<<"\n";
	}
	return 0;
}