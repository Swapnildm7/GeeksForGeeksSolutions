#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n1,n2,n3,data;
	cin>>t;
	while(t--){
	    cin>>n1>>n2>>n3;
	    map<int,int> mm,mm1,mm2,mm3;
	    vector<int> arr1,arr2,arr3;
	    for(int i=0;i<n1;i++){
	        cin>>data;
	        arr1.push_back(data);
	    }
	    for(int i=0;i<n2;i++){
	        cin>>data;
	        arr2.push_back(data);
	    }
	    for(int i=0;i<n3;i++){
	        cin>>data;
	        arr3.push_back(data);
	    }
	    for(int i=0;i<n1;i++){
	        if(mm1[arr1[i]]==0){
	        mm[arr1[i]]+=1;
	        mm1[arr1[i]]+=1;
	        }
	    }
	    for(int i=0;i<n2;i++){
	        if(mm2[arr2[i]]==0){
	        mm[arr2[i]]+=1;
	        mm2[arr2[i]]+=1;
	        }
	    }
	    for(int i=0;i<n3;i++){
	        if(mm3[arr3[i]]==0){
	        mm[arr3[i]]+=1;
	        mm3[arr3[i]]+=1;
	        }
	    }
	    int st=0;
	    for(auto it : mm){
	        if(it.second==3){
	            st=1;
	        cout<<it.first<<" ";
	        }
	    }
	    if(st==0){
	        cout<<-1;
	    }
	    cout<<endl;
	}
	return 0;
}