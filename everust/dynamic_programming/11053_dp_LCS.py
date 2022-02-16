def l(A, B, m, n):
    L = [ [0]*(m+1) for i in range(n+1)]

    for i in range(m+1):
        for j in range(n+1):

            if i == 0 or j==0:
                L[i][j] = 0

            elif A[i-1] == B[j-1]:
                if j-1>0:
                    if B[j-1] > B[j-2]:
                        L[i][j] = L[i-1][j-1] + 1
                    else:
                        L[i][j] = max(L[i-1][j], L[i][j-1])
                else:
                    L[i][j] = L[i-1][j-1] + 1
            
            else: 
                L[i][j] = max(L[i-1][j], L[i][j-1])

    # print('B ' + str(B))
    # count = 0
    # print('A ', end='')

    # for i in L:
    #     if count >=1:
    #         print(str(A[count-1]), end=' ')
    #     count += 1
    #     print(i)
    
    return L[n][m]

N = int(input())
A = input().split()

for i in range(N):
    A[i] = int(A[i])

B = sorted(A)

result = l(A, B, len(A), len(B))

print(result)