from math import log,floor
t=int(input())
while(t):
    t-=1
    x,y=map(int,input().split())
    st=1
    if(x==1 and y==1):
        print(st)
        continue
    if(x==1 and y!=1):
        print(1-st)
        continue
    ans=log(y)/log(x)
    if(floor(ans)==ans):
        print(st)
    else:
        print(1-st)