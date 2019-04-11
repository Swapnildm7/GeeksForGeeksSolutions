arr=[1,1,1,1]
for i in range(4,85):
    arr.append(arr[i-1]+arr[i-4])
for _ in range(int(input())):
    n=int(input())
    print(arr[n])
    
    