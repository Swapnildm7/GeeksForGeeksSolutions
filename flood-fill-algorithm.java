import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static boolean issafe(int x, int y, int m, int n){
        return (x>=0 && y>=0 && x<m && y<n);
    }
    public static void func(int arr[][],int m,int n,int x,int y,int k,int elem,int vis[][]){
        if(x<0 || y<0 ||x>=m || y>=n)return;
        if(arr[x][y]==elem && vis[x][y]==-1){
            arr[x][y]=k;
            vis[x][y]=1;
            if(issafe(x-1,y,m,n))
                func(arr,m,n,x-1,y,k,elem,vis);
            if(issafe(x,y-1,m,n))
                func(arr,m,n,x,y-1,k,elem,vis);
            if(issafe(x+1,y,m,n))
                func(arr,m,n,x+1,y,k,elem,vis);
            if(issafe(x,y+1,m,n))
                func(arr,m,n,x,y+1,k,elem,vis);
        }
        return;
    }
    
	public static void main (String[] args) throws IOException{
	    int t,n,m,i,j,x,y,k,curr=0;
	    Scanner in = new Scanner(System.in);
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    t=in.nextInt();
	    while(t-->0){
	        m=in.nextInt();n=in.nextInt();
	        int arr[][]=new int[m][n];
	        int vis[][]=new int[m][n];
	        for(i=0;i<m;i++){
	            for(j=0;j<n;j++){
	                arr[i][j]=in.nextInt();
	                vis[i][j]=-1;
	            }
	        }
	        x=in.nextInt();y=in.nextInt();k=in.nextInt();
	       func(arr,m,n,x,y,k,arr[x][y],vis);
	       for(int row[] : arr){
	           for(int col:row)
	           System.out.print(col+" ");
	       }
	       System.out.println();
	    }
	}
}