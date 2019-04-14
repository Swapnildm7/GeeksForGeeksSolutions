for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=sorted(list(map(int,input().split())))
    ans=0
    for i in range(n):
        if(k<arr[i]):
            break
        else:
            ans+=1
            k-=arr[i]
    print(ans)
    