#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	ll t,i,n,k,data,arr[10005];
	cin>>t;
	while(t--){
	    ll st=0;
	    unordered_map<ll,ll> mm;
	    cin>>n>>k;
	    for(i=0;i<n;i++){
	        cin>>data;
	        arr[i]=data;
	        mm[data]+=1;
	    }
	    for(i=0;i<n;i++){
	       if(mm[arr[i]]==k){
	           cout<<arr[i];
	           st=1;
	           break;
	       }
	    }
	    if(st==0)
	    cout<<"-1";
	    cout<<"\n";
	}
    return 0;
}