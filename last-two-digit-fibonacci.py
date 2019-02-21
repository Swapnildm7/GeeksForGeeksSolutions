arr=[0,1]
arr1=["00","01","01","02","03","05","08"]
for i in range(2,350):
    arr.append(arr[i-1]+arr[i-2])
for _ in range(int(input())):
    n=int(input())
    m=n%300
    ans=arr[m]%100
    if(ans<10):
        print("0",ans,sep="",end="")
    else:
        print(ans,sep="",end="")
    print()