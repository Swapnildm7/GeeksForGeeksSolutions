def func(arr,n,s):
    currsum=arr[0]
    start=0
    for i in range(1,n+1):
        while(currsum>s and start<i-1):
            currsum-=arr[start];
            start+=1
        if(currsum==s):
            print(start+1,i)
            return 1
        if(i<n):
            currsum+=arr[i]
    return 0
for _ in range(int(input())):
    n,s=map(int,input().split())
    arr=list(map(int,input().split()))
    if(not func(arr,n,s)):
        print("-1")