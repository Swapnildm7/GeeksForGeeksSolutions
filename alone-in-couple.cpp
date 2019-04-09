#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll t,n,i,data;
	cin>>t;
	while(t--){
	    ll ans;
	    cin>>n;
	    cin>>data;
	    ans=data;
	    for(i=1;i<n;i++){
	        cin>>data;
	        ans^=data;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}