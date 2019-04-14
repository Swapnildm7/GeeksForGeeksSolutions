arr=[1, 2, 5, 10, 20, 50, 100, 200, 500, 2000]
for _ in range(int(input())):
    try:
        n=int(input())
    except ValueError:
        n=int(input())
    ans=1
    for i in range(9,-1,-1):
        if(arr[i]>n):
            continue
        ans=n//arr[i]
        for j in range(ans):
            print(arr[i],end=" ",sep=" ")
        n=int(n%arr[i])
        if(n==0):
            break
    print()
    