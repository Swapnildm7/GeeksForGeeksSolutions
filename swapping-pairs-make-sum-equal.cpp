#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,m,i,data;
	map<int,int> arr1;
	map<int,int> arr2;
	cin>>t;
	while(t--){
	    ll s1=0,s2=0,st=-1;
	    cin>>n>>m;
	    for(i=0;i<n;i++){
	        cin>>data;
	        arr1[i]=data;
	        s1+=data;
	    }
	    for(i=0;i<m;i++){
	        cin>>data;
	        arr2[i]=data;
	        s2+=data;
	    }
	    ll diff=s2-s1;
	    for(i=0;i<n;i++){
	        if(arr2.find(arr1[i]+diff/2)!=arr2.end()){
	            st=1;
	            break;
	        }
	    }
	    cout<<st;
	    cout<<"\n";
	}
    return 0;
}