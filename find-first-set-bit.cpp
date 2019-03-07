#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n)
	    cout<<log2((n&(-n)))+1;
	    else
	    cout<<"0";
	    cout<<"\n";
	}
	return 0;
}