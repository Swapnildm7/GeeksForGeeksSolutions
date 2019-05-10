#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>t;
	string s,s2;
	while(t--){
	  s2="";
	  cin>>s;
	  int n=s.size();
	  for(int i=0;i<n-1;i++){
	      if(s[i]=='a' && s[i+1]=='c'){
	      i+=1;
	      continue;
	      }
	      else if(s[i]=='b')
	      continue;
	      else
	      s2+=s[i];
	  }
	  if(s[n-1]!='b')
	  if(s[n-2]=='a' && s[n-1]=='c');
	  else
	  s2+=s[n-1];
	  cout<<s2<<"\n";
	}
	
	return 0;
}