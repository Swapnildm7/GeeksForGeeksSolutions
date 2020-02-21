// { Driver Code Starts
//Initial Template for Java

import java.util.*;



 // } Driver Code Ends
//User function Template for Java

// Helper class to find largest number with minimum frequency
class Geeks
{
    // Function to find largest number with minimum frequency
    public static int LargButMinFreq(int arr[], int n)
    {
        // Your code here
        int count,freq=Integer.MAX_VALUE,i,ans=0;
        HashMap<Integer,Integer> map=new HashMap<Integer,Integer>();
        for(i=0;i<n;i++){
            if(map.containsKey(arr[i])){
              count=map.get(arr[i]);
              map.put(arr[i],count+1);
            }
            else
            map.put(arr[i],1);
        }
        for(Map.Entry mapelement: map.entrySet()){
            int val=(int)mapelement.getValue();
            int key=(int)mapelement.getKey();
            if(freq>val){
                freq=val;
                ans=key;
            }
            if(freq==val){
                if(ans<key)
                    ans=key;
                }
        }
        return ans;
    }
}

// { Driver Code Starts.

// Driver class with main function
class GFG 
{
    // Main function
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		// Iterating over testcases
		while(t-- > 0)
		{
		    int n = sc.nextInt();
		    int arr[] = new int[n];
		    
		    for(int i = 0; i < n; i++)
		     arr[i] = sc.nextInt();
		     
		    Geeks obj = new Geeks();
		    System.out.println(obj.LargButMinFreq(arr, n));
		}
	}
}  // } Driver Code Ends