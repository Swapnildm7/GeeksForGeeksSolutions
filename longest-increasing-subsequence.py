def func(arr,n):
    larr=[0]*n
    larr[0]=1
    for i in range(1,n):
        larr[i]=1
        for j in range(i):
            if(larr[i]<larr[j]+1 and arr[j]<arr[i]):
                larr[i]=larr[j]+1
    print(max(larr))
for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    func(arr,n)