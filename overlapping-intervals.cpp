#include <bits/stdc++.h>
using namespace std;

struct interval{
  int start;
  int end;
};

bool comparefunc(interval i1,interval i2){
    return (i1.start<i2.start);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,i,a,n,b;
	cin>>t;
	while(t--){
	    cin>>n;
	    interval *arr=new interval[n];
	    for(i=0;i<n;i++){
	        cin>>a>>b;
	        arr[i].start=a;
	        arr[i].end=b;
	    }
	 
	    sort(arr,arr+n,comparefunc);
	    
	    stack<interval> st;
	    
	    st.push(arr[0]);
	    for(i=1;i<n;i++){
	        interval top=st.top();
	        
	        if(top.end<arr[i].start)
	        st.push(arr[i]);
	        
	        
	        else if(top.end<arr[i].end){
	            top.end=arr[i].end;
	            st.pop();
	            st.push(top);
	        }
	    }
	    
	    int n2=st.size();
	    //cout<<"n2---"<<n2<<"\n";
	    
	    vector<interval> vec;
	    
	    while(!st.empty()){
	        interval t = st.top();
	        a=t.start;
	        b=t.end;
	        interval a1;
	        a1.start=a;
	        a1.end=b;
	        vec.push_back(a1);
	        st.pop();
	   }
	   
	   sort(vec.begin(),vec.end(),comparefunc);
	   //cout<<arr2[0].start<<" "<<arr2[0].end<<" ";
	   
	   for(i=0;i<n2;i++){
	       cout<<vec[i].start<<" "<<vec[i].end<<" ";
	   }
	   
	   cout<<"\n";
	}
	return 0;
}