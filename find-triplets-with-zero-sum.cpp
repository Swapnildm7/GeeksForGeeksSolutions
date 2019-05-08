/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete the function below*/
bool findTriplets(int arr[], int n)
{ 
    int i,j;
    sort(arr,arr+n);
    unordered_set<int> s;
    for(i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==0)return true;
            else if(sum>0)k--;
            else j++;    
        }
    }
    return false;
}