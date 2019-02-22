def func(a,b):
    a1=bin(a)[2:]
    b1=bin(b)[2:]
    c=0
    a1="0"*(32-len(a1))+a1
    b1="0"*(32-len(b1))+b1
    #print(b1)
    for i in range(32):
        #print(a1[i])
        if(int(a1[i])!=int(b1[i])):
            c+=1
    print(c)
for _ in range(int(input())):
    a,b=map(int,input().split())
    func(a,b)