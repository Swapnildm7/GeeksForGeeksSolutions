dp=[1]*53
dp[2]=2

for i in range(3,53):
    dp[i]=dp[i-3]+dp[i-2]+dp[i-1]

for _ in range(int(input())):
    n=int(input())
    print(dp[n])