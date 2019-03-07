/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{  if(s.empty()) return -1;
stack<int> s1;int temp;minEle=s.top();
while(!s.empty()){
    temp=s.top();
    s.pop();
    //cout<<temp<<" tEMP";
    if(temp<minEle)minEle=temp;
    s1.push(temp);
}
while(!s1.empty()){
    s.push(s1.top());
    s1.pop();
}
   return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty()) return -1;
    int mini=s.top();
    s.pop();
    if(mini<minEle)minEle=mini;
    return mini;
   //Your code here
}
/*push element x into the stack*/
void _stack::push(int x)
{   
    if(x<minEle)minEle=x;
    s.push(x);
   //Your code here
}
