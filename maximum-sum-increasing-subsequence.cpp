#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,i,data,t,j;
	cin>>t;
	long int maxs=0;
	while(t--){
	    vector<int> arr;
	vector<long int> ms;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>data;
	        arr.push_back(data);
	        ms.push_back(data);
	    }
	    
	    for(i=0;i<n;i++){
	        for(j=0;j<i;j++){
	            if(arr[i]>arr[j] && ms[i]<ms[j]+arr[i]){
	                ms[i]=ms[j]+arr[i];
	            }
	        }
	    }
	    
	    maxs=ms[0];
	    for(i=1;i<n;i++){
	        if(maxs<ms[i])
	            maxs=ms[i];
	    }
	    cout<<maxs<<endl;
	}
	
	return 0;
}