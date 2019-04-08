#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,i;
    int n,data,first;
    
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin>>data;
            arr[i]=data*data;
        }
        bool found=false;
        int j;
        sort(arr.begin(),arr.end());
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int expected=arr[i]+arr[j];
                found=binary_search(next(arr.begin(),j+1),arr.end(),expected);
                if(found)break;
            }
            if(found)break;
        }
        if(found)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
	return 0;
}