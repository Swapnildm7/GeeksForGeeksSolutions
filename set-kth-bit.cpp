#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int check=(int)pow(2,k);
	    cout<<(n|check)<<"\n";
	}
	return 0;
}