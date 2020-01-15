#include <bits/stdc++.h>
using namespace std;
typedef long int ll; 
void func(ll arr[], ll n){
    priority_queue<ll> s;
    priority_queue<ll,vector<ll>,greater<ll>> g;
    s.push(arr[0]);
    cout<<arr[0]<<"\n";
    ll med = arr[0];
    for(int i=1;i<n;i++){
        ll ele=arr[i];
        if(s.size()>g.size()){
               if(ele<med){
                   g.push(s.top());
                   s.pop();
                   s.push(ele);
               }
               else{
                   g.push(ele);
               }
               med=(s.top()+g.top())/2.0;
        }
        else if(s.size()<g.size()){
            if(ele>med){
                   s.push(g.top());
                   g.pop();
                   g.push(ele);
               }
               else{
                   s.push(ele);
               }
               med=(s.top()+g.top())/2.0;
        }
        else{
            if(ele<med){
                s.push(ele);
                med=(ll)s.top();
            }
            else{
                g.push(ele);
                med=(ll)g.top();
            }
        }
        cout<<med<<"\n";
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,i;
	ll arr[1000006];
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	func(arr,n);
	return 0;
}