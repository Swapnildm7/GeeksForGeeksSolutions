for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    ans=[]
    ans.append(arr[n-1])
    maxi=arr[n-1]
    for i in range(n-2,-1,-1):
        if(arr[i]>=maxi):
            ans.append(arr[i])
            maxi=arr[i]
    ans=ans[::-1]
    print(*ans)
            