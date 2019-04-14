#include <bits/stdc++.h>
using namespace std;


int func(int n, int k){
    int arr[n+1][k+1],i,j;
    
    for(i=1;i<=n;i++){
        arr[i][0]=0;
        arr[i][1]=1;
    }
    
    for(i=1;i<=k;i++){
        arr[1][i]=i;
    }
    
    
    int x,res;
    for(i=2;i<=n;i++){
        for(j=2;j<=k;j++){
            arr[i][j]=INT_MAX;
            for(x=1;x<=j;x++){
            res=1+max(arr[i-1][x-1],arr[i][j-x]);
            if(res<arr[i][j]){
                arr[i][j]=res;
            }
            }
        }
    }
    return arr[n][k];
    
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,k;
	cin>>t;
	while(t--){
	   cin>>n>>k; 
	   cout<<func(n,k)<<"\n";
	}
	return 0;
}