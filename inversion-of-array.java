/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static long merge(int arr[],int temp[],int low,int mid,int high){
        int i,j,k;
        long invcount=0;
        i=low;j=mid;k=low;
        while(i<mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                invcount+=(mid-i);
            }
        }
        while(i<mid){
            temp[k++]=arr[i++];
        }
        while(j<=high){
            temp[k++]=arr[j++];
        }
        for(i=low;i<=high;i++){
            arr[i]=temp[i];
        }
        return invcount;
    }
    
    public static long mergesort(int arr[],int temp[],int low,int high){
        int mid;
        long invcount=0;
        if(high>low){
            mid=(low+high)/2;
            invcount+=mergesort(arr,temp,low,mid);
            invcount+=mergesort(arr,temp,mid+1,high);
            invcount+=merge(arr,temp,low,mid+1,high);
        }
        return invcount;
    }
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    int n=Integer.parseInt(br.readLine().trim());
		    int arr[]= new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    for(int i=0;i<n;i++){
		        arr[i]=Integer.parseInt(inputLine[i]);
		    }
		    int temparr[]=new int[n];
		    System.out.println(mergesort(arr,temparr,0,n-1));
		}
	}
}
