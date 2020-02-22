from math import *
for _ in range(int(input())):
    n=int(input())
    if(n&(n-1)==0 and int(log2(n))%3==0):
        print("Yes")
    else:
        print("No")