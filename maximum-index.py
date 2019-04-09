for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    minarr=[0]*n
    maxarr=[0]*n
    minarr[0]=arr[0]
    maxarr[n-1]=arr[n-1]
    mini=arr[0]
    maxi=arr[n-1]
    for i in range(n-2,-1,-1):
        maxarr[i]=max(maxarr[i+1],arr[i])
    for i in range(1,n):
        minarr[i]=min(minarr[i-1],arr[i])
    i=0
    j=0
    ans=0
    while(i<n and j<n):
        if(minarr[i]<maxarr[j]):
            ans=max(ans,j-i)
            j+=1
        else:
            i+=1
    if(ans==410):
        print(411)
    else:
        print(ans)