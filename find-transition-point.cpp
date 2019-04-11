int transitionPoint(int arr[],int n)
{
// Your code goes here
int i;
for(i=1;i<n;i++){
    if(arr[i]!=arr[i-1])
    return i;
}
return -1;
}