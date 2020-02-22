from math import *
for _ in range(int(input())):
    arr=list(input())
    n=len(arr)
    odd=0
    even=0
    for i in range(n):
        if(arr[i]=='1'):
            if(i%2==0):
                even+=1
            else:
                odd+=1
    if(abs(even-odd)%3==0):
        print(1)
    else:
        print(0)