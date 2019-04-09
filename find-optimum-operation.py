for _ in range(int(input())):
    n=int(input())
    b=bin(n)[2::]
    print(len(b)+sum(map(int,b))-1)