#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
            for(i=0;i<n;i++){
            for(j=n-1;j>-1;j--){
                
                cout<<a[j][i]<<" ";
            }
            //cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}