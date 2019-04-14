for _ in range(int(input())):
    string=list(input())
    n=len(string)
    st=0
    for i in  range(n-1,-1,-1):
        if(string[i]=='1'):
            print(i)
            st=1
            break
    if(not st):
        print("-1")