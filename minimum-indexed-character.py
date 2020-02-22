for _ in range(int(input())):
    str1=list(input())
    patt=list(input())
    cou=[0]*1000
    st=0
    for j in range(len(patt)):
        cou[ord(patt[j])]=1
    for i in range(len(str1)):
        if(cou[ord(str1[i])]==1):
            print(str1[i])
            st=1
            break
    if(st==0):
        print("$")