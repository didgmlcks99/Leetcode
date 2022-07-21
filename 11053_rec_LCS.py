def l(A, B, m, n, pre):
    if m==0 or n==0:
        return 0
    if A[m-1] == B[n-1] and A[m-1] != pre:
        return 1 + l(A, B, m-1, n-1, A[m-1])
    else:
        return max(l(A, B, m-1, n, B[n]), l(A, B, m, n-1, A[m]))

N = int(input())
A = input().split()

for i in range(N):
    A[i] = int(A[i])

B = sorted(A)

result = l(A, B, len(A), len(B), -1)

print(result)