
// C program for implementation of Merge Sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r);
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("
");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int n1=m-l+1;
     int n2=r-m;
     
     int i,j,k;
     
     int *arr1= new int[n1];
     int *arr2= new int[n2];
     
     for(i=0;i<n1;i++)
     {
     arr1[i]=arr[l+i];
     }
     for(j=0;j<n2;j++){
     arr2[j]=arr[m+j+1];
     }
     
     i=0,j=0,k=l;
     while(i<n1 && j<n2){
         if(arr1[i]<=arr2[j]){
             arr[k++]=arr1[i++];
         }
         else{
             arr[k++]=arr2[j++];
         }
     }
     
     while(i<n1){
         arr[k++]=arr1[i++];
     }
      while(j<n2){
         arr[k++]=arr2[j++];
     }
}