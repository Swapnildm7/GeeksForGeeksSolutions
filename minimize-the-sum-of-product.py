for _ in range(int(input())):
    n=int(input())
    arr1=sorted(list(map(int,input().split())))
    arr2=sorted(list(map(int,input().split())))
    s1=0
    s2=0
    for i in range(n):
        s1+=arr1[i]*arr2[n-i-1]
        s2+=arr2[i]*arr1[n-i-1]
    print(min(s1,s2))