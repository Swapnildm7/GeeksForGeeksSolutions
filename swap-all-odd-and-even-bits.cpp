#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<(((n&170)>>1)|((n&85)<<1))<<"\n";
	}
	
	return 0;
}