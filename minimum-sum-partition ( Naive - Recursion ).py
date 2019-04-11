def func(arr,i,sumcal,total):
    if(i==0):
        return abs(sumcal-(total-sumcal))
    return min(func(arr,i-1,sumcal+arr[i-1],total),func(arr,i-1,sumcal,total))
for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    print(func(arr,n,0,sum(arr)))