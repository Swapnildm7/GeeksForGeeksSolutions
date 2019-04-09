for _ in range(int(input())):
    n=int(input())
    b=bin(n)
    b=list(b[2::])
    n=len(b)
    arr=[0]*n
    if(b[0]=='1'):
        arr[0]=1
    for i in range(1,n):
        if(b[i]=='1'):
            arr[i]=arr[i-1]+1
    print(max(arr))