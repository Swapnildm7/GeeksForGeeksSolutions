int bin_search(int A[], int left, int right, int k)
{
    while(left<=right){
        int mid=(left+right)/2;
        if(A[mid]==k)return mid;
        else if(A[mid]>=k) return bin_search(A,0,mid-1,k);
        return bin_search(A,mid+1,right,k);
    }
    return -1;
}