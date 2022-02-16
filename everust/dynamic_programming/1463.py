MAX = 1000000

dp = [0]*MAX

dp[1] = dp[2] = dp[3] = 1

N = int(input())

for i in range(4, N+1, 1):
    a = b = c = MAX

    if i%3==0:
        a = dp[i//3]+1
    elif i%2==0:
        b = dp[i//2]+1

    c = dp[i-1]+1
    
    dp[i] = min(a, b, c)

print(dp[N])