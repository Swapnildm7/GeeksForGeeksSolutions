#include "bits/stdc++.h"
using namespace std;
typedef int ll;

void findcombination(vector<ll> &arr,vector<vector<ll>> &res,ll i,ll n,ll sum,vector<ll> &temp)
{
    if(sum<0){
        return;
    }
    
    if(sum==0){
        res.push_back(temp);
        return;
    }
    if(i>=n)
        return;
    temp.push_back(arr[i]);
    findcombination(arr,res,i+1,n,sum-arr[i],temp);
    temp.pop_back();
    while(i<n-1 && arr[i]==arr[i+1])i++;
    findcombination(arr,res,i+1,n,sum,temp);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll t,n,i,sum,j;
	cin>>t;
	while(t--){
	    cin>>n;
	vector<ll> arr(n);
	vector<vector<ll>> res;
	for(i=0;i<n;i++)
	    cin>>arr[i];
	cin>>sum;
	sort(arr.begin(),arr.end());
	vector<ll> curr;
	findcombination(arr,res,0,n,sum,curr);
	vector<ll> temp;
	if(res.size()==0){
	    cout<<"Empty\n";
	    continue;
	}
	for(i=0;i<res.size();i++){
	    temp=res[i];
	    cout<<"(";
	    for(j=0;j<temp.size()-1;j++){
	        cout<<temp[j]<<" ";
	    }
	    cout<<temp[temp.size()-1];
	    cout<<")";
	}
	cout<<"\n";
	}
	return 0;
}