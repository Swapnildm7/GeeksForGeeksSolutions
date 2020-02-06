#include "bits/stdc++.h"
using namespace std;
typedef int ll;

int bsearch(vector<ll> &nums,ll target,ll low,ll high){
    if(low>high)
        return -1;
    ll mid=(low+high)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[low]<=nums[mid]){
        if(nums[low]<= target && nums[mid]>=target)
            return bsearch(nums,target,low,mid-1);
        return bsearch(nums,target,mid+1,high);
    }
    if(nums[mid]<=target && nums[high]>=target)
        return bsearch(nums,target,mid+1,high);
    return bsearch(nums,target,low,mid-1);
    }
    
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,data,i,tar;
	cin>>t;
	while(t--){
	   vector<ll> arr;
	   cin>>n;
	   for(i=0;i<n;i++){
	       cin>>data;
	       arr.push_back(data);
	   }
	cin>>tar;
	cout<<bsearch(arr,tar,0,n-1)<<"\n";   
	}
	return 0;
}