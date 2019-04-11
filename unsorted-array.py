for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    minarr=[0]*n
    mini=arr[0]
    minarr[0]=1
    maxi=arr[n-1]
    maxarr=[0]*n
    maxarr[n-1]=1
    for i in range(1,n):
        if(arr[i]>=mini):
            minarr[i]=1
        else:
            minarr[i]=0
        mini=max(mini,arr[i])
    for i in range(n-2,-1,-1):
        if(arr[i]<=maxi):
            maxarr[i]=1
        else:
            maxarr[i]=0
        maxi=min(maxi,arr[i])
    st=-1
    #print(minarr)
    #print(maxarr)
    for i in range(1,n-1):
        if(minarr[i] and maxarr[i]):
            print(arr[i])
            st=1
            break
    if(st==-1):
        print(st)