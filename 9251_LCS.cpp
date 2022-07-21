#include <iostream>
#include <cstring>

#define MAX 1001

using namespace std;

int l(char *A, char *B, int m, int n){
    int L[m+1][n+1];

    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){

            if(i==0 || j==0){
                L[i][j] = 0;
            }else if(A[i-1] == B[j-1]){
                L[i][j] = L[i-1][j-1] + 1;
            }else{
                L[i][j] = max(L[i-1][j], L[i][j-1]);
            }
        }
    }

    return L[m][n];
}

int main(void){
    char A[MAX];
    char B[MAX];

    cin >> A;
    cin >> B;

    int A_size = strlen(A);
    int B_size = strlen(B);

    int result = l(A, B, A_size, B_size);

    cout << result << endl;

    return 0x0;
}