def func(arr,n):
    ans=[]
    i=0
    while(i<n-1):
        while(i<n-1 and arr[i]>arr[i+1]):
            i+=1
        if(i==n-1):
            break
        start=i
        i+=1
        while(i<n and arr[i]>arr[i-1]):
            i+=1
        end=i-1
        ans.append([start,end])
    return ans
for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    ans=func(arr,n)
    if(n==1 or len(ans)==0):
        print("No Profit",end=' ')
    else:
        for i in range(len(ans)):
            print("(",ans[i][0]," ",ans[i][1],")",end=" ",sep="")
    print()