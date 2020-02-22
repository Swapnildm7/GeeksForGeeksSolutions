for _ in range(int(input())):
    str1=input()
    str2=input()
    c1=[0]*26
    c2=[0]*26
    c3=[0]*26
    for i in range(len(str1)):
        c1[ord(str1[i])-ord('a')]=1
    for i in range(len(str2)):
        c2[ord(str2[i])-ord('a')]=1
    ans=""
    for i in range(26):
        if(c1[i]^c2[i]==1):
            ans+=chr(i+97)
    print(ans)