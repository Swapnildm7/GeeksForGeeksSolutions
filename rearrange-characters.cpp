#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

struct key{
    ll freq;
    char ch;
    
    bool operator<(const key &k) const{
        return freq<k.freq;
    }
};

void func(string s){
    int countarr[26]={0},i,n;
    n=s.length();
    for(i=0;i<n;i++) countarr[s[i]-'a']++;
    
    priority_queue<key> pq;
    for(i=0;i<26;i++){
        if(countarr[i])
        {
        char ch=i+97;
        pq.push(key{countarr[i],ch});
        }
    }

    ll ans=0;
    
    key prev {-1,'#'};
    
    while(!pq.empty()){
        key curr=pq.top();
        pq.pop();
        ans+=1;
        
        if(prev.freq>0){
            pq.push(prev);
        }
        curr.freq-=1;
        prev=curr;  
    }    
    if(ans==n)cout<<"1"<<"\n";
    else cout<<"0"<<"\n";
    
    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        func(s);
    }
	return 0;
}