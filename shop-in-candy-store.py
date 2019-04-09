from math import ceil
for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr1=sorted(arr)
    arr2=sorted(arr,reverse=True)
    ind=ceil(n/(k+1))
    print(sum(arr1[0:ind]),sum(arr2[0:ind]))