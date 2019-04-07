#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    	
    ll t,n,m,x,data,i;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;
        unordered_map<ll,ll> A;
        vector<ll> B;
        for(i=0;i<n;i++){
            cin>>data;
            A[data]=i;
        }
        vector<pair<int,int>> ans;
        unordered_map<ll,ll>::const_iterator it; 
        ll cou=0;
        for(i=0;i<m;i++){
            cin>>data;
            it = A.find(x-data);
            if(it!=A.end()){
                ans.push_back(make_pair(it->first,data));
                //cout<<"hello";
                cou+=1;
            }
        }
        if(cou>0){
            sort(ans.begin(),ans.end());
        for(i=0;i<cou-1;i++){
            cout<<ans[i].first<<" "<<ans[i].second<<", ";
        }
       cout<<ans[cou-1].first<<" "<<ans[cou-1].second;}
       else{
           cout<<"-1";
       }
        cout<<"\n";
    }
	return 0;
}