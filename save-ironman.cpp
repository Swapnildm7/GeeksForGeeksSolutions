#include <bits/stdc++.h>
using namespace std;


int main() {
	int t,i;
	string s,s2,s3;
	cin>>t;
	getchar();
	while(t--){
	    getline (cin, s);
	    s2="";
	    s3="";
	    int n=s.size();
	    //cout<<n<<s<<"\n";
	    for(i=0;i<n;i++){
	        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
	        s2+=tolower(s[i]);
	        s3+=tolower(s[i]);}
	    }
	    reverse(s2.begin(),s2.end());
	    //cout<<s2<<"---------s2\n";
	    //cout<<s3<<"------------s3\n";
	    if(s2==s3)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}