#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,data;
	cin>>t;
	while(t--){
	    cin>>n;
	    map<int,int,greater<int>> mm;
	    multimap<int,int,greater<int>> m;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        cin>>data;
	        arr.push_back(data);
	    }
	    sort(arr.begin(),arr.end());
	    for(int i=0;i<n;i++){
	        mm[arr[i]]+=1;
	    }
	    for(int i=0;i<n;i++){
	       m.insert({mm[arr[i]],arr[i]});
	    }
	    for(auto it : m){
	        cout<<it.second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}