/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int func(String A,String B){
        int m=A.length(),n=B.length(),i,j;
        int dp[][]=new int[m+1][n+1];
        for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
                 if(j==0){
                    dp[i][j]=1;
                }
                else if(i==0){
                    dp[i][j]=0;
                }
               
                else if(A.charAt(i-1)==B.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[m][n];
    }
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		sc.nextLine();
		while(t-->0){
		    String A=sc.nextLine();
		    String B=sc.nextLine();
		    System.out.println(func(A,B));
		}
	}
}