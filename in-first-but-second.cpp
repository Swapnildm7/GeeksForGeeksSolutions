#include"bits/stdc++.h"
using namespace std;

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int t;
	cin>>t;
	while(t--){
	    long long int n1,n2;cin>>n1>>n2;
	    map <long long int,long long int> m1,m2;
	    long long int temp;
	    vector<long long int> arr3;
	    for(int i=0;i<n1;i++){
	        cin>>temp;
	        m1[temp]++;
	        arr3.push_back(temp);
	    }
	    for(int i=0;i<n2;i++){
	        cin>>temp;
	        m2[temp]++;
	        
	    }
        for(int i=0;i<n1;i++){
	        if(m2.find(arr3[i])== m2.end()){
	            cout<<arr3[i]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}