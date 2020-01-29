for _ in range(int(input())):
    s1,s2=input().split()
    arr=[0]*26
    for i in range(len(s1)):
        arr[ord(s1[i])-ord('a')]+=1
    for i in range(len(s2)):
        arr[ord(s2[i])-ord('a')]-=1
    st=0
    for i in range(26):
        if(arr[i]!=0):
            st=1
            print("NO")
            break
    if(st==0):
        print("YES")