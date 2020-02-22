#User function Template for python3
'''
	Your task is to return the length of longest subsequence
	with consecutive elements present( order does not matter).
	
	Function Arguments: array a with size n. 
	Return Type: Integer
'''
def findLongestConseqSubseq(a,n):
    #code here
    cou=[-1]*10005
    dp=[1]*10005
    for i in range(n):
        cou[a[i]]=a[i]
    for i in range(1,10005):
        if(cou[i]==cou[i-1]+1):
            dp[i]=dp[i-1]+1
    return max(dp)


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        n=int(input())
        a = list(map(int, input().strip().split()))
        print(findLongestConseqSubseq(a,n))
# } Driver Code Ends