for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    curr=nextmax=ans=st=0
    for i in range(n):
        if(curr==nextmax and curr<i):
            st=1
            print("-1")
            break
        if(curr<i):
            curr=nextmax
            nextmax=i
            ans+=1
        nextmax=max(nextmax,i+arr[i])
    if(st==0):
        print(ans)