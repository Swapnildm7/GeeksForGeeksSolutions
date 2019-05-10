#include"bits/stdc++.h"
using namespace std;

int n,m;

bool isvalid(int a,int b){
    if(a<0 || a>=n || b<0  || b>=m)
    return false;
    return true;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t,i,j;
	char arr[100][100];
	
	cin>>t;
	while(t--){
	    int c=0;
	    cin>>n>>m;
	    int vis[100][100];
	   /* int **vis = new int*[n];
	    for(i=0;i<m;i++)
	    vis[i]=new int[m];
	    */
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            vis[i][j]=0;
	        }
	    }
	    
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	    /*for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<"\n";
	    }*/
	    int i1,i2;
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            if(arr[i][j]=='X' && vis[i][j]==0){
	                vis[i][j]=1;
	                c+=1;
	                //cout<<"c---"<<c<<"---i---"<<i<<"---j---"<<j<<"\n";
	                queue<pair<int,int>> q;
	                q.push(make_pair(i,j));
	                while(!q.empty()){
	                    pair<int,int> p1=q.front();
	                    q.pop();
	                    i1=p1.first;
	                    i2=p1.second;
	                    //cout<<i1<<"----------"<<i2<<"\n";
	                    if(isvalid(i1-1,i2)){
	                        if(arr[i1-1][i2]=='X' && vis[i1-1][i2]==0){
	                        vis[i1-1][i2]=1;
	                        q.push(make_pair(i1-1,i2));
	                        }
	                    }
	                    if(isvalid(i1,i2-1)){
	                        if(arr[i1][i2-1]=='X' && vis[i1][i2-1]==0){
	                        vis[i1][i2-1]=1;
	                        q.push(make_pair(i1,i2-1));
	                        }
	                    }
	                    if(isvalid(i1,i2+1)){
	                        if(arr[i1][i2+1]=='X' && vis[i1][i2+1]==0){
	                        vis[i1][i2+1]=1;
	                        q.push(make_pair(i1,i2+1));
	                        }
	                    }
	                    if(isvalid(i1+1,i2)){
	                        if(arr[i1+1][i2]=='X' && vis[i1+1][i2]==0){
	                        vis[i1+1][i2]=1;
	                        q.push(make_pair(i1+1,i2));
	                        }
	                    }
	                }
	                
	            }
	            
	    
	        }
	    }
	     /* for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<"\n";
	    }
	    
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<vis[i][j]<<" ";
	        }
	        cout<<"\n";
	    }*/
	    
	    cout<<c<<"\n";
	}
	
	return 0;
}