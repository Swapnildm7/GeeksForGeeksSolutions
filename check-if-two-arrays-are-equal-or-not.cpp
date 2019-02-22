#include"bits/stdc++.h"
using namespace std;

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int n1;cin>>n1;
	    map <int,int> m1,m2;
	    int temp;
	    for(int i=0;i<n1;i++){
	        cin>>temp;
	        m1[temp]++;
	    }
	    for(int i=0;i<n1;i++){
	        cin>>temp;
	        m2[temp]++;
	    }
	    int flag=0;
	    map<int,int>::iterator i1 = m1.begin();
	    map<int,int>::iterator i2 = m2.begin();
	    while(i1 !=m1.end() && i2 != m2.end()){
	        if(i1->second!=i2->second || i1->first != i2->first){
	            flag=1;break;
	        }
	        i1++;i2++;
	    }
	    cout<<(!flag)<<endl;
	}
	return 0;
}