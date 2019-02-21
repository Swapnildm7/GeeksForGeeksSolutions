for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    countarr=[0]*100005
    st=0
    for i in range(n):
        countarr[arr[i]]+=1
    for i in range(n):
        if(countarr[arr[i]]==k):
            print(arr[i])
            st=1
            break
    if(not st):
        print("-1")