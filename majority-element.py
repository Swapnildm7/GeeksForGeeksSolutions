for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    count=[0]*1000005
    st=0
    for i in range(n):
        count[arr[i]]+=1
        if(count[arr[i]]>n//2):
            print(arr[i])
            st=1
            break
    if(st==0):
        print(-1)