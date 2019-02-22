def func(a):
    b=bin(a)[2:]
    #print(b)
    b="0"*(32-len(b))+b
    b=b[::-1]
    print(int(b,2))
for _ in range(int(input())):
    n=int(input())
    func(n)