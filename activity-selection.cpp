#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i,t,n,data,start[10000],end[10000],j;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    vector<pair<int,int>> vect;
	    
	    for(i=0;i<n;i++){
	        cin>>start[i];
	    }
	    
	    for(i=0;i<n;i++){
	        cin>>end[i];
	        vect.push_back(make_pair(end[i],start[i]));
	        //cout<<end[i]<<" "<<start[i]<<"\n";
	    }
	    
	    sort(vect.begin(),vect.end());
	    
	    i=0;
	    for(vector<pair<int,int>> :: iterator it=vect.begin();it!=vect.end();it++){
	        end[i]=it->first;
	        start[i]=it->second;
	        //cout<<end[i]<<" "<<start[i]<<"\n";
	        i++;
	    }
	    
	    int ans=1;
	    i=0;
	    for(j=1;j<n;j++){
	        if(start[j]>=end[i]){
	            ans+=1;
	            i=j;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}