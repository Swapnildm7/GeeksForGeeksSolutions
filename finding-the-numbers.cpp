#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,arr[100005],i,N;
	cin>>t;
	while(t--){
	    cin>>N;
	    n=2*N+2;
	    ll xorans;
	    for(i=0;i<n;i++){
	    cin>>arr[i];
	    if(i==0)xorans=arr[i];
	    else xorans^=arr[i];
	    }
	     
	    ll firstno=0;
	    ll secondno=0;
	    
	    ll lastbit=xorans & ~(xorans-1);
	    //cout<<"xorans----"<<xorans<<"\n";
	    //cout<<"lastbit----"<<lastbit<<"\n";
	    
	    for(i=0;i<n;i++){
	        if(arr[i]&lastbit)
	        {
	            firstno^=arr[i];
	        }
	        else{
	            secondno^=arr[i];
	        }
	    }
	    
	    cout<<min(firstno,secondno)<<" "<<max(firstno,secondno)<<"\n";
	}
	return 0;
}