#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,data,m,k,t,ans,i,i1,i2;
	cin>>t;
	while(t--){
	    vector<int> v1;
	    vector<int> v2;
	    vector<int> v3;
	    cin>>n>>m>>k;
	    for(i=0;i<n;i++){
	        cin>>data;
	        v1.push_back(data);
	    }
	    for(i=0;i<m;i++){
	        cin>>data;
	        v2.push_back(data);
	    }
    i1=0;i2=0;
    while(i1<n && i2<m){
        //cout<<ans<<"---ans\n"<<endl;
         if(k==0){
          break;
      }
      if(v1[i1]<v2[i2]){
          ans=v1[i1];
          i1++;
      }  
      else{
          ans=v2[i2];
          i2++;
      }
      k--;
    }
    
    while(i1<n){
         if(k<=0){
          break;
      }
          ans=v1[i1];
          i1++;
          k--;
    }
     while(i2<m){
         if(k<=0){
          break;
      }
          ans=v2[i2];
          i2++;
          k--;
    }
    cout<<ans<<endl;
}
	
	
	return 0;
}