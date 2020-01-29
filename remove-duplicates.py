for _ in range(int(input())):
    s=input()
    arr=[0]*257
    ans=""
    for i in range(len(s)):
        ind=ord(s[i])
        if(arr[ind]==0):
            arr[ind]=1
            ans+=s[i]
    print(ans)