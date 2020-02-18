for _ in range(int(input())):
    n=int(input())
    arr=list(input().split())
    for i in range(n):
        arr[i]=int(arr[i])
    max_ind=n-1
    min_ind=0
    maxele=arr[n-1]+1
    for i in range(n):
        if(i%2==0):
            arr[i]+=(arr[max_ind]%maxele)*maxele
            max_ind-=1
        else:
            arr[i]+=(arr[min_ind]%maxele)*maxele
            min_ind+=1
    for i in range(n):
        arr[i]//=maxele
    print(*arr)