for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    if(n==1):
        print(1)
        continue
    suma=sum(arr)
    presum=0
    st=0
    for i in range(1,n):
        presum+=arr[i-1]
        if(suma-arr[i]-presum==presum):
            print(i+1)
            st=1
            break
    if(st==0):
        print(-1)