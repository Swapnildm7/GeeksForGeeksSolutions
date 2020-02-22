for _ in range(int(input())):
    n=int(input())
    if(n==0):
        print("NO")
        continue
    if(n&(n-1)==0):
        print("YES")
    else:
        print("NO")