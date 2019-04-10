#include <bits/stdc++.h>
using namespace std;

int ans[1000005];

void func(int n,int m){
    int ini=n,rem,i;
    queue<int> q;
    
    for(i=1;i<=9;i++)
    q.push(i);
    while(!q.empty()){
        int no=q.front();
        q.pop();
        //cout<<no<<" ";
        if(no>1000000)break;
        ans[no]=1;
        rem=no%10;
        
        if(rem==0){
            int newno3=no*10+rem+1;
            q.push(newno3);
        }
        else if(rem==9){
            int newno4=no*10+rem-1;
            q.push(newno4);
        }
        else{
            int newno1=no*10+rem+1;
            int newno2=no*10+rem-1;
            q.push(newno1);
            q.push(newno2);
        }
        
    }
    return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	for(i=0;i<=1000004;i++)ans[i]=0;
	func(1,1000005);
	ans[0]=1;
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int c=0;
	    for(i=n;i<=m;i++){
	    if(ans[i])c++;}
	    cout<<c<<"\n";
	}
	return 0;
}