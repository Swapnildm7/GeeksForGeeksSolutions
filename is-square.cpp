#include <bits/stdc++.h>
using namespace std;

bool isprime[1000000];

vector<int> primeno;
int primec=0;

void prime(){
    memset(isprime,true,sizeof(isprime));
    int i,j;
    isprime[0]=isprime[1]=false;
    for(i=2;i<100000;i++){
        if(isprime[i]){
            primeno.push_back(i);
            primec+=1;
            for(j=2*i;j<1000000;j+=i){
                isprime[j]=false;
            }
        }
    }
    return;
}

int func(int n){
    int i,c=0;
    for(i=0;i<primec;i++){
        //cout<<primeno[i]<<"P"<<"\n";
        if((primeno[i]*primeno[i])<=n)
        c++;
        else
        break;
    }
    return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	prime();
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<func(n)<<endl;
	}
	
	return 0;
}