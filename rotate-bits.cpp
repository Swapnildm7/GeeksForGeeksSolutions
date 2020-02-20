#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,d,n1,n2,temp;
	cin>>t;
	while(t--){
	    cin>>n>>d;
	    d=d%16;
	    bitset<16> b(n);
	    cout<<((b<<d)|(b>>(16-d))).to_ullong()<<"\n";
	    cout<<((b>>d)|(b<<(16-d))).to_ullong()<<"\n";
	}
	return 0;
}