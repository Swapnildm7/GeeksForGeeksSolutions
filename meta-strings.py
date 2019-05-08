for _ in range(int(input())):
    a=list(input())
    b=list(input())
    n1=len(a)
    n2=len(b)
    if(n1!=n2):
        print(0)
        continue
    c=0
    u1=0
    u2=0
    for i in range(n1):
        if(a[i]!=b[i]):
            c+=1
            if(u1==0):
                u1=i
            else:
                u2=i
    if(c!=2):
        print(0)
        continue
    a[u1],a[u2]=a[u2],a[u1]
    if(a==b):
        print(1)
    else:
        print(0)