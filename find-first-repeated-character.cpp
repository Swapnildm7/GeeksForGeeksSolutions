#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	ll t,i,arr[26];
	cin>>t;
	while(t--){
	    ll st=0;
	    memset(arr,0,sizeof(arr));
	    cin>>s;
	    for(i=0;i<s.length();i++){
	        if(arr[s[i]-'a']!=0){
	            cout<<s[i];
	            st=1;
	            break;
	        }
	        arr[s[i]-'a']+=1;
	    }
	    if(st==0)
	    cout<<"-1";
	    cout<<"\n";
	}
    return 0;
}