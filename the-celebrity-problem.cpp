/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// The task is to complete this function

bool knows(int M[MAX][MAX],int a,int b){
    return M[a][b];
}
int getId(int M[MAX][MAX], int n)
{
    if(n==2){
        if(M[0][0]==0 && M[0][1]==0){
            if(M[1][0]!=0 || M[1][1]!=0)
            return 0;
        }
        if(M[1][0]==0 && M[1][1]==0){
            if(M[0][0]!=0 || M[0][0]!=0)
            return 1;
        }
        return -1;
    }
    stack<int> s;
    int A,B,C,i;
    
    
    for(i=0;i<n;i++)
    s.push(i);
    
    A=s.top();
    s.pop();
    B=s.top();
    s.pop();
    
    while(s.size()>1){
        if(knows(M,A,B)){
            A=s.top();
            s.pop();
        }
        else{
            B=s.top();
            s.pop();
        }
    }
    C=s.top();
    s.pop();
    
    if(knows(M,C,A))
    C=A;
    if(knows(M,C,B))
    C=B;
    
    for(i=0;i<n;i++){
        if(i!=C ){
            if(knows(M,C,i) ||!knows(M,i,C))
            return -1;
        }
    }
    return C;
}