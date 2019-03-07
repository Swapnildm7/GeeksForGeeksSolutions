#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t,n,arr[100000],arr1[100000],i,temp;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        stack<pair<ll,ll>> s;
        s.push(make_pair(arr[0],0));
        //arr1[0]=arr[0];
        for(i=1;i<n;i++){
            
            if(s.empty()){
                s.push(make_pair(arr[i],i));
                continue;
            }
            
            
            while(s.empty()==false && s.top().first<arr[i])
            {   arr1[s.top().second]=arr[i];
                s.pop();
            }
                
                s.push(make_pair(arr[i],i));
                //cout<<"T---"<<s.top().first<<"----"<<s.top().second<<"\n";
        }
        
        while(!s.empty()){
            //cout<<"T---"<<s.top().first<<"----"<<s.top().second<<"\n";
            arr1[s.top().second]=-1;
                s.pop();
        }
        for(i=0;i<n;i++)
        cout<<arr1[i]<<" ";
        cout<<"\n";
    }
    return 0;
}#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t,n,arr[100000],arr1[100000],i,temp;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        stack<pair<ll,ll>> s;
        s.push(make_pair(arr[0],0));
        //arr1[0]=arr[0];
        for(i=1;i<n;i++){
            
            if(s.empty()){
                s.push(make_pair(arr[i],i));
                continue;
            }
            
            
            while(s.empty()==false && s.top().first<arr[i])
            {   arr1[s.top().second]=arr[i];
                s.pop();
            }
                
                s.push(make_pair(arr[i],i));
                //cout<<"T---"<<s.top().first<<"----"<<s.top().second<<"\n";
        }
        
        while(!s.empty()){
            //cout<<"T---"<<s.top().first<<"----"<<s.top().second<<"\n";
            arr1[s.top().second]=-1;
                s.pop();
        }
        for(i=0;i<n;i++)
        cout<<arr1[i]<<" ";
        cout<<"\n";
    }
    return 0;
}