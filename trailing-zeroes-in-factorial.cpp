#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c=0;
	    for(int i=5;i<=n;i*=5){
	        c+=n/i;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}