#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,cou=0,sum=0,i,data,maxlen=0;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    unordered_map<ll,ll> presum;
	    vector<ll> arr;
	    sum=0;
	    cou=0;
	    maxlen=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>data;
	        arr.push_back(data);
	    }
	    for(i=0;i<n;i++){
	        sum+=arr[i];
	        if(sum==0)cou+=1;
	        if(presum.find(sum)!=presum.end()){
	            cou+=presum[sum];
	        }
	        presum[sum]+=1;
	    }
	    cout<<cou<<endl;
	}
	return 0;
}