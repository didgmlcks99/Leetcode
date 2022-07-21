#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){

    int N;
    cin >> N;
    
    int dp[N+1][2];

    dp[1][0] = dp[1][1] = 0;
    dp[2][0] = dp[3][0] = dp[2][1] = dp[3][1] = 1;
    
    int tmp;
    int dir;

    for(int i=4; i<=N; i++){
        dir = i-1;
        dp[i][0] = dp[i-1][0]+1;
        dp[i][1] = dir;
        
        if(i%2 == 0){
            tmp = dp[i/2][0]+1;
            dir = i/2;
            if(tmp<dp[i][0]){
                dp[i][0] = tmp;
                dp[i][1] = dir;
            }
        }

        if(i%3 == 0){
            tmp = dp[i/3][0]+1;
            dir = i/3;
            if(tmp<dp[i][0]){
                dp[i][0] = tmp;
                dp[i][1] = dir;
            }
        }
    }

    cout << dp[N][0] << endl;
    
    cout << N << " ";
    dir = N;
    while(dp[dir][1] != 0){
        cout << dp[dir][1] << " ";
        dir = dp[dir][1];
    }cout << endl;

    return 0x0;
}