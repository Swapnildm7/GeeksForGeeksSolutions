#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(ll a, ll b, ll c){
if(a==0)return 0;
if(b==0)return 1;

ll ans;
if(b&1)
    {
        ans=a%c;
        ans=(ans*(func(a,b-1,c)%c))%c;
    }
else{
    ans=func(a,b/2,c)%c;
    ans=(ans*ans)%c;
}

return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    cout<<func(a,b,c)<<"\n";
	}
	return 0;
}