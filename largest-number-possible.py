def func(n,s):
    if(s==0):
        if(n==1):
            print(0)
            return
        else:
            print("-1")
            return
    elif(s>9*n):
        print("-1")
        return
    else:
        arr=[0]*n
        for i in range(n):
            if(s>=9):
                arr[i]=9
                s-=9
            else:
                arr[i]=s
                s=0
                break
    string=""
    for i in range(n):
        string+=str(arr[i])
    print(string)
    return
for _ in range(int(input())):
    n,s=map(int,input().split())
    func(n,s)