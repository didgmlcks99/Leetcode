#include <iostream>
#include <cstdlib>
 
#define MAX 1000010
#define MODULER 1000000009

using namespace std;
 
int main(void)
{
    long long* dp = (long long*)malloc(MAX * sizeof(long long));

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int N;
    cin >> N;

    int *input = (int*)malloc(N * sizeof(int));

    for(int i=0; i<N; i++){
        cin >> input[i];

        for(int j=4; j<=input[i]; j++){
            dp[j] = (dp[j-1] + dp[j-2] + dp[j-3])%MODULER;
        }
    }

    for(int i=0; i<N; i++){
        cout << dp[input[i]]%MODULER << endl;
    }
 
    return 0;
}

// 출처: https://yabmoons.tistory.com/590 [얍문's Coding World..]