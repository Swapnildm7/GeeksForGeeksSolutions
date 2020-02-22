def func(n):
    c=0
    while(n>0):
        if(n%2==1):
            c+=1
        n//=2
    return c
for _ in range(int(input())):
    n=int(input())
    c=0
    for i in range(1,n+1):
        c+=func(i)
    print(c)