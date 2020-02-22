for _ in range(int(input())):
    n,m=map(int,input().split())
    arr1=list(map(int,input().split()))
    arr2=list(map(int,input().split()))
    c=[0]*100005
    for i in range(m):
        c[arr2[i]]+=1
    for i in range(n):
        c[arr1[i]]-=1
    st=0
    for i in range(100005):
        if(c[i]>0):
            st=1
            break
    if(st==1):
        print("No")
    else:
        print("Yes")