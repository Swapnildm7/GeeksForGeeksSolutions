for _ in range(int(input())):
    n1,n2=map(int,input().split())
    print(sum(map(int,list(bin(n1^n2)[2::]))))