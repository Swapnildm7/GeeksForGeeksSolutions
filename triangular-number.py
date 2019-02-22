for _ in range(int(input())):
    n=int(input())
    st=0
    for i in range(1,100005):
        if((i)*(i+1)==2*n):
            st=1
            break
    print(st)