#include "bits/stdc++.h"
using namespace std;

long int func(int arr[],int n){
    int maxInd,index=0,maxEle,i,j;
    //ASSUMING 32 bits
    for(i=31;i>=0;i--){
        maxInd=index;
        maxEle=INT_MIN;
        for(j=index;j<n;j++){
            if((arr[j]&(1<<i)) && (arr[j]>maxEle) ){
                maxEle=arr[j];
                maxInd=j;
            }
        }
        if(maxEle==INT_MIN)
        continue;
        
        //SWAPPING
        int temp=arr[index];
        arr[index]=arr[maxInd];
        arr[maxInd]=temp;

        for(j=0;j<n;j++){
            if(j!=index &&(arr[j]&(1<<i)))
            arr[j]^=arr[index];
        }
        index++;
        
    }
    long int ans=arr[0];
    for(i=1;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n,arr[10000],i;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<func(arr,n)<<"\n";
	}
	return 0;
}