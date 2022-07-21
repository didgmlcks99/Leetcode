#include <iostream>

using namespace std;

int main(void){
    int i, j;
    int n, k;

    cin >> n >> k;

    int coin[n];
    for(i=0; i<n; i++){
        cin >> coin[i];
    }

    int dp[11];

    // dp[0] = 1;

    for(i=0; i<=k; i++){
        cout << i << "; " << dp[i] << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = coin[i]; j <= k; j++)
    //     {
    //         dp[j] = dp[j] + dp[j - coin[i]];
    //     }
    // }

    // cout << dp[k] << endl;

    
    return 0x0;
}