#include <iostream>
#include <cstdlib>

#define MAX 1000000

using namespace std;

int main(void){
    int dp[MAX];

    dp[1] = 0;
    dp[2] = dp[3] = 1;

    int N;
    cin >> N;
    
    int a, b, c;

    for(int i=4; i<=N; i++){
        a = b = c = MAX;

        if(i%3 == 0){
            a = dp[i/3]+1;
        }
        
        if(i%2 == 0){
            b = dp[i/2]+1;
        }

        c = dp[i-1]+1;

        dp[i] = min(min(a, b), c);
    }

    cout << dp[N];

    return 0x0;
}