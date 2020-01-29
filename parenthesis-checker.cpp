#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	   string s;
	   cin>>s;
	   int n=s.size();
	   stack<char> st;
	   st.push(s[0]);
	   for(int i=1;i<n;i++){
	       if(st.empty()){
	           st.push(s[i]);
	           continue;
	       }
	       char top=st.top();
	       if((top=='(' && s[i]==')') || (top=='[' && s[i]==']') || (top=='{' && s[i]=='}') )
                st.pop();
	       else
                st.push(s[i]);
	   }
	   if(st.empty())
	   cout<<"balanced"<<"\n";
	   else
	   cout<<"not balanced"<<"\n";
	}
	return 0;
}