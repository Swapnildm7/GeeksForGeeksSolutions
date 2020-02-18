for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    maxsofar=-1*float('inf')
    maxendhere=0
    for i in range(n):
        maxendhere+=arr[i]
        maxsofar=max(maxsofar,maxendhere)
        maxendhere=max(0,maxendhere)
    print(maxsofar)