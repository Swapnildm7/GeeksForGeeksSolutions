/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int func(int arr[],int dep[],int n){
        int platforms=1,curr=1,i=1,j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                i++;
                curr++;
                platforms=Math.max(platforms,curr);
            }
            else{
                curr--;
                j++;
            }
        }
        return platforms;
    }
    
	public static void main (String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    int n=Integer.parseInt(br.readLine().trim());
		    int arr[]= new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    for(int i=0;i<n;i++){
		        arr[i]=Integer.parseInt(inputLine[i]);
		    }
		    int dep[]= new int[n];
		    String inputLine1[] = br.readLine().trim().split(" ");
		    for(int i=0;i<n;i++){
		        dep[i]=Integer.parseInt(inputLine1[i]);
		    }
		    Arrays.sort(arr);
		    Arrays.sort(dep);
		    System.out.println(func(arr,dep,n));
		}
	}
}