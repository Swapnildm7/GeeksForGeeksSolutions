#include <bits/stdc++.h>
using namespace std;

int func(int n, int W , int we[],int val[]){
    
int i,w;
int K[n+1][W+1];

for(i=0;i<=n;i++)
{
    for(w=0;w<=W;w++){
    if(i==0 || w==0)
    K[i][w]=0;
    else if(w>=we[i-1])
    K[i][w]=max(val[i-1]+K[i-1][w-we[i-1]],K[i-1][w]) ;   
    else
    K[i][w]=K[i-1][w];
    }
}

return K[n][W];

    
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i,t,n,w,we[10005],val[10005];
	
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>w;
	    for(i=0;i<n;i++)cin>>val[i];
	    for(i=0;i<n;i++)cin>>we[i];
	    
	    vector<pair<int,int>> vect;
	    
	    /*for(i=0;i<n;i++){
	        vect.push_back(make_pair(we[i],val[i]));
	    }
	    sort(vect.begin(),vect.end());
	    for(i=0;i<n;i++){
	       we[i]=vect[i].first;
	       val[i]=vect[i].second;
	    }*/
	    cout<<func(n,w,we,val)<<"\n";
	}
	return 0;
}