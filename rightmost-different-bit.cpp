#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n1,n2;
	cin>>t;
	while(t--){
	    cin>>n1>>n2;
	    int ans=(n1^n2);
	    cout<<(log2(ans&~(ans-1)))+1<<"\n";
	}
	return 0;
}